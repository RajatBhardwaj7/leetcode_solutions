#include<iostream>
using namespace std;
int main(){
    int arr[4][2]={{1,3},{2,6},{8,10},{15,18}};
    sort(&arr[0][0], &arr[0][0] + 4 * 2);
    for(int i=0;i<4;i++){
        cout<<arr[i][0]<<" "<<arr[i][1]<<" ";
    }
    return 0;

}