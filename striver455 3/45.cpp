#include <iostream>
using namespace std;
int main(){
    int i;
    int n=5;
    for (i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}