#include <stdio.h>
#include <math.h>

// Function to calculate the determinant of a 3x3 matrix
double determinant(double A[3][3]) {
    return A[0][0] * (A[1][1] * A[2][2] - A[1][2] * A[2][1]) -
           A[0][1] * (A[1][0] * A[2][2] - A[1][2] * A[2][0]) +
           A[0][2] * (A[1][0] * A[2][1] - A[1][1] * A[2][0]);
}

// Function to calculate the inverse of a 3x3 matrix
int inverse(double A[3][3], double invA[3][3]) {
    double det = determinant(A);
    if (det == 0) {
        printf("Determinant is zero. Inverse does not exist.\n");
        return 0;
    }

    // Adjugate matrix (cofactor transpose)
    double adj[3][3];
    adj[0][0] = (A[1][1] * A[2][2] - A[1][2] * A[2][1]);
    adj[0][1] = -(A[0][1] * A[2][2] - A[0][2] * A[2][1]);
    adj[0][2] = (A[0][1] * A[1][2] - A[0][2] * A[1][1]);

    adj[1][0] = -(A[1][0] * A[2][2] - A[1][2] * A[2][0]);
    adj[1][1] = (A[0][0] * A[2][2] - A[0][2] * A[2][0]);
    adj[1][2] = -(A[0][0] * A[1][2] - A[0][2] * A[1][0]);

    adj[2][0] = (A[1][0] * A[2][1] - A[1][1] * A[2][0]);
    adj[2][1] = -(A[0][0] * A[2][1] - A[0][1] * A[2][0]);
    adj[2][2] = (A[0][0] * A[1][1] - A[0][1] * A[1][0]);

    // Inverse = (1/det) * Adjugate
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            invA[i][j] = adj[i][j] / det;
        }
    }
    return 1;
}

// Function to perform matrix-vector multiplication (3x3 * 3x1)
void mat_vec_mult(double A[3][3], double x[3], double b[3]) {
    for (int i = 0; i < 3; i++) {
        b[i] = 0;
        for (int j = 0; j < 3; j++) {
            b[i] += A[i][j] * x[j];
        }
    }
}

int main() {
    // Coefficient Matrix A
    double A[3][3] = {
        {5, -3, -1},
        {-1, 6, -2},
        {-4, -1, 12}
    };

    // Right-hand side vector b (mass inputs)
    double b[3] = {660, 400, 2400};

    // Matrix for the inverse A_inv
    double invA[3][3];

    // Vector for the solution c (concentrations)
    double c[3];

    // (a) Determine the matrix inverse.
    printf("--------------------------------------------------------------------\n");
    printf("(a) Matrix A:\n");
    for (int i = 0; i < 3; i++) {
        printf("| %6.1f %6.1f %6.1f |\n", A[i][0], A[i][1], A[i][2]);
    }
    printf("Determinant of A: %.2f\n", determinant(A));

    if (inverse(A, invA)) {
        printf("\nInverse Matrix (A_inv):\n");
        for (int i = 0; i < 3; i++) {
            printf("| %6.4f %6.4f %6.4f |\n", invA[i][0], invA[i][1], invA[i][2]);
        }

        // (b) Use the inverse to determine the solution c = A_inv * b.
        mat_vec_mult(invA, b, c);

        printf("\n--------------------------------------------------------------------\n");
        printf("(b) Solution (Concentrations in g/m^3):\n");
        printf("c1 (Reactor 1): %.2f g/m^3\n", c[0]);
        printf("c2 (Reactor 2): %.2f g/m^3\n", c[1]);
        printf("c3 (Reactor 3): %.2f g/m^3\n", c[2]);
        
        printf("\n--------------------------------------------------------------------\n");
        // (c) and (d) rely on the inverse matrix columns/rows.
        
        // (c) Determine how much the rate of mass input to reactor 3 (b3) must be 
        // increased to induce a 10 g/m^3 rise in the concentration of reactor 1 (c1).
        // c1 = invA[0][0]*b1 + invA[0][1]*b2 + invA[0][2]*b3
        // Change in c1 due to change in b3 is: delta_c1 = invA[0][2] * delta_b3
        // Therefore: delta_b3 = delta_c1 / invA[0][2]
        
        double delta_c1 = 10.0;
        double invA_02 = invA[0][2];
        double delta_b3 = delta_c1 / invA_02;
        
        printf("(c) Analysis:\n");
        printf("The change in c1 due to a change in b3 is determined by A_inv[1, 3] = %.4f.\n", invA_02);
        printf("Required increase in mass input to reactor 3 (delta_b3) for a %.1f g/m^3 rise in c1:\n", delta_c1);
        printf("delta_b3 = %.1f / %.4f = %.2f g/day\n", delta_c1, invA_02, delta_b3);

        printf("\n--------------------------------------------------------------------\n");
        // (d) How much will the concentration in reactor 3 (c3) be reduced if the rate of mass 
        // input to reactors 1 (b1) and 2 (b2) is reduced by 700 and 350 g/day, respectively?
        // c3 = invA[2][0]*b1 + invA[2][1]*b2 + invA[2][2]*b3
        // Change in c3 (delta_c3) = invA[2][0]*delta_b1 + invA[2][1]*delta_b2
        
        double delta_b1 = -700.0; // Reduction
        double delta_b2 = -350.0; // Reduction
        double invA_20 = invA[2][0];
        double invA_21 = invA[2][1];
        
        double delta_c3 = (invA_20 * delta_b1) + (invA_21 * delta_b2);
        
        printf("(d) Analysis:\n");
        printf("Change in c3 (delta_c3) = (A_inv[3, 1] * delta_b1) + (A_inv[3, 2] * delta_b2)\n");
        printf("delta_c3 = (%.4f * %.1f) + (%.4f * %.1f) = %.2f g/m^3\n", 
               invA_20, delta_b1, invA_21, delta_b2, delta_c3);
        printf("The concentration in reactor 3 will be reduced by %.2f g/m^3.\n", fabs(delta_c3));
        
        printf("--------------------------------------------------------------------\n");

    } else {
        printf("System cannot be solved by matrix inverse (singular matrix).\n");
    }

    return 0;
}