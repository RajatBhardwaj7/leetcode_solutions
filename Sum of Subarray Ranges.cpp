// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             for(int k=i;k<=j;k++){
//                 cout<<arr[k]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// } #include <iostream>
#include <stack>
using namespace std;

// Function to compute total sum of subarray ranges
long long subArrayRanges(int nums[], int n) {
    long long res = 0;

    // -------- For Maximum Contribution --------
    stack<int> stMax;
    for (int i = 0; i <= n; i++) {
        while (!stMax.empty() && (i == n || nums[stMax.top()] <= nums[i])) {
            int mid = stMax.top();
            stMax.pop();
            int left = stMax.empty() ? -1 : stMax.top();
            int right = i;
            long long count = (long long)(mid - left) * (right - mid);
            res += (long long)nums[mid] * count;
        }
        stMax.push(i);
    }

    // -------- For Minimum Contribution --------
    stack<int> stMin;
    for (int i = 0; i <= n; i++) {
        while (!stMin.empty() && (i == n || nums[stMin.top()] >= nums[i])) {
            int mid = stMin.top();
            stMin.pop();
            int left = stMin.empty() ? -1 : stMin.top();
            int right = i;
            long long count = (long long)(mid - left) * (right - mid);
            res -= (long long)nums[mid] * count;
        }
        stMin.push(i);
    }

    return res;
}

int main() {
    int nums[] = {1, 2, 3};   // Example input
    int n = sizeof(nums) / sizeof(nums[0]);

    cout << "Sum of all subarray ranges = " << subArrayRanges(nums, n) << endl;
    return 0;
}
