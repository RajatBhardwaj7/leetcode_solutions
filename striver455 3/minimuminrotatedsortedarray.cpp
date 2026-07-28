#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,6,7,0,1,2};
    int n= sizeof(arr)/sizeof(arr[0]);
     int low = 0, high = n- 1;
    int ans = INT_MAX;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[low] <= arr[high]) {
            ans = min(ans, arr[low]);
            break;
        }
        if (arr[low] <= arr[mid]) {
            ans = min(ans, arr[low]);
            low = mid + 1;
        }
        else { 
            ans = min(ans, arr[mid]);
            high = mid - 1;
        }
    }
    cout<<ans;
    return ans;
}
