#include<iostream>
using namespace std;
int main(){
    vector<int>brr={1,2,3,4};
    vector<int>brr2(brr);
    for(int kaju:brr2){
        cout<<kaju<<endl;
    }
    return 0;
}