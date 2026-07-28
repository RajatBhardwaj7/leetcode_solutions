#include<iostream>
using namespace std;

int main() {
    int nums[] = {1, 2, 1, 3, 5, 2};
    int n = sizeof(nums) / sizeof(nums[0]);
    int XOR = 0;

    // Step 1: XOR all elements to get XOR of the two unique numbers
    for (int i = 0; i < n; i++) {
        XOR = XOR ^ nums[i];
    }

    // Step 2: Find the rightmost set bit in XOR
    int rightmost = (XOR &(XOR-1))^XOR;

    // Step 3: Divide elements into two buckets and XOR separately
    int XOR1 = 0, XOR2 = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] & rightmost) {
            XOR1 = XOR1 ^ nums[i];  // ✅ corrected line
        } else {
            XOR2 = XOR2 ^ nums[i];
        }
    }

    // Step 4: Print the result in sorted order
    if (XOR1 < XOR2) {
        cout << "{" << XOR1 << "," << XOR2 << "}";
    } else {
        cout << "{" << XOR2 << "," << XOR1 << "}";
    }

    return 0;
}