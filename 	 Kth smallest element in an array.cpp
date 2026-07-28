#include <iostream>
using namespace std;

class KthSmallest {
public:
    int *arr;
    int size;

    KthSmallest(int a[], int n) {
        arr = a;
        size = n;
    }

    void minHeapify(int i) {
        int smallest = i;
        int left = 2*i + 1;
        int right = 2*i + 2;

        if(left < size && arr[left] < arr[smallest])
            smallest = left;

        if(right < size && arr[right] < arr[smallest])
            smallest = right;

        if(smallest != i) {
            swap(arr[i], arr[smallest]);
            minHeapify(smallest);
        }
    }

    void buildMinHeap() {
        for(int i = (size-2)/2; i >= 0; i--)
            minHeapify(i);
    }

    int kthSmallest(int k) {
        buildMinHeap();

        for(int i = 1; i < k; i++) {
            swap(arr[0], arr[size-1]);
            size--;
            minHeapify(0);
        }
        return arr[0];
    }
};

int main() {
    int arr[] = {1, 5, 3, 2, 4};
    int n = 5;

    KthSmallest k(arr, n);
    cout << "Kth smallest = " << k.kthSmallest(3);

    return 0;
}
