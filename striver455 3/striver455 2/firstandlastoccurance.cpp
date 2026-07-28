#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 6, 6, 7, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 6;

    int first = -1, last = -1;

    // Find first occurrence
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == k) {
            first = mid;
            high = mid - 1;  // move left to find earlier occurrence
        } else if(arr[mid] < k) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Find last occurrence
    low = 0; high = n - 1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == k) {
            last = mid;
            low = mid + 1;   // move right to find later occurrence
        } else if(arr[mid] < k) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << "First occurrence of " << k << ": " << first << endl;
    cout << "Last occurrence of " << k << ": " << last << endl;

    return 0;
}
