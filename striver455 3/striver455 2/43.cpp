#include <iostream>
using namespace std;
int main(){
    int i;
    int n=5;
    for(i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}