#include<iostream>
using namespace std;
int main(){
    vector<int>arr={1,2,3,4};
    arr.push_back(6);
    arr.push_back(89);
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    cout<<arr.at(5)<<endl;
    cout<<arr[5]<<endl;

    return 0;
}