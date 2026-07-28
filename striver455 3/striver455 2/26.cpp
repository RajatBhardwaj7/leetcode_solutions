#include <iostream>
using namespace std;

void sumof(int arr[], int n) {
    int sum = arr[0] + arr[n - 1];
    cout << sum << endl;
}

int main() {
    int marks[] = {1, 3, 5, 7, 9};
    sumof(marks, 5);
    return 0;
}
