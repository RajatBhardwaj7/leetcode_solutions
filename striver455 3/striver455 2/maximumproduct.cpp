#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 0, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxi = arr[0];

    for (int i = 0; i < n; i++) {
        int product = 1;
        for (int j = i; j < n; j++) {
            product *= arr[j];
            if (product > maxi) {
                maxi = product;
            }
        }
    }

    cout  << maxi << endl;

    return 0;
}
