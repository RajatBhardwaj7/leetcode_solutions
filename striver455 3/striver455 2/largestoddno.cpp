#include<iostream>
using namespace std;
int main(){
    string arr[]={"flower","flow","flight","fly"};
    int n=4;
    sort(arr,arr+n);
    string first=arr[0];
    string last=arr[n-1];
    string prefix="";
    for(int i=0;i<first.length()&& i<last.length();i++){
        if(first[i]==last[i]){
            prefix+=first[i];
        }
        else{
            break;
        }
    }
    cout<<prefix;
    return 0;

}