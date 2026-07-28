#include<iostream>
using namespace std;

class rankby {
public:
    int *arr;
    int size;

    rankby(int a[], int n) {
        arr = a;
        size = n;
    }

    // Bubble sort
    void sortArray(int temp[]) {
        for(int i = 0; i < size - 1; i++) {
            for(int j = 0; j < size - i - 1; j++) {
                if(temp[j] > temp[j + 1]) {
                    swap(temp[j], temp[j + 1]);
                }
            }
        }
    }

    void replacebyrank() {
        int temp[size];

        // Copy original array
        for(int i = 0; i < size; i++)
            temp[i] = arr[i];

        // Sort copied array
        sortArray(temp);

        int rank = 1;

        for(int i = 0; i < size; i++) {
            if(i > 0 && temp[i] == temp[i - 1])
                continue;

            for(int j = 0; j < size; j++) {
                if(arr[j] == temp[i])
                    arr[j] = rank;
            }
            rank++;
        }
    }

    void print() {
        for(int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    int arr[] = {20, 15, 26, 2, 98, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    rankby r(arr, n);
    r.replacebyrank();
    r.print();

    return 0;
}
