#include <iostream>
using namespace std;
class Minheap {
public:
    int *arr;
    int size;
    Minheap(int a[], int n) {
        arr = a;
        size = n;
    }
    void checkMinHeap() {
        for (int i = 0; i <= (size - 2) / 2; i++) {
            int left = 2 * i + 1;
            int right = 2 * i + 2;
            if (left < size && arr[i] > arr[left]) {
                cout << "false";
                return;
            }
            if (right < size && arr[i] > arr[right]) {
                cout << "false";
                return;
            }
        }
        cout << "true";
    }
};
int main() {
    int arr[] = {10, 20, 30, 21, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    Minheap h(arr, n);
    h.checkMinHeap();

    return 0;
}
