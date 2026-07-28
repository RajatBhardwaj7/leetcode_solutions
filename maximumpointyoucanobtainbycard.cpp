#include<iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    int maxpoint = 0;
    int lsum = 0, rsum = 0;
    int rindex = n - 1;

    // Take all k cards from the left initially
    for(int i = 0; i < k; i++) {
        lsum += arr[i];
    }
    maxpoint = lsum;

    // Now shift cards from left to right side
    for(int i = k - 1; i >= 0; i--) {
        lsum -= arr[i];          // remove one from left
        rsum += arr[rindex];     // add one from right
        rindex--;
        maxpoint = max(maxpoint, lsum + rsum);
    }

    cout << maxpoint;
    return 0;
}
