#include <iostream>
using namespace std;
int candy(int ratings[], int n) {
    if (n == 0) return 0;
    int total = 1; 
    int up = 0, down = 0, peak = 0;
    for (int i = 1; i < n; i++) {
        if (ratings[i] > ratings[i - 1]) {
            up++;
            peak = up;
            down = 0;
            total += 1 + up;
        }
        else if (ratings[i] == ratings[i - 1]) {
            up = down = peak = 0;
            total += 1;
        }
        else { 
            up = 0;
            down++;
            total += 1 + down;
            if (down > peak) {
                total += 1; 
            }
        }
    }
    return total;
}
int main() {
    int ratings[] = {1, 0, 5};
    int n = 3;
    cout << candy(ratings, n);
}
