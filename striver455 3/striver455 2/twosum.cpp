#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 7, 120, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout<<"enetr target";
    cin>>target;

    for(int j = 0; j < n; j++) {
        for(int i = j + 1; i < n; i++) {
            if(arr[j] + arr[i] == target) {
                cout  << j<< " " << i ;
                
            }
        }
    }

    return 0;
}
