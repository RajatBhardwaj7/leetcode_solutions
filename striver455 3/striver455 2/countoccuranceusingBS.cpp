#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, ans = -1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == target) {
            ans = mid;
            high = mid - 1;  
        } else if(arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int lastOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, ans = -1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == target) {
            ans = mid;
            low = mid + 1;  
        } else if(arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {0, 0, 1, 1, 1, 2, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 2;

    int first = firstOccurrence(arr, n, target);
    int last = lastOccurrence(arr, n, target);

    int count = (first == -1) ? 0 : last - first + 1;
    cout << "Count of " << target << ": " << count << endl;

    return 0;
}
