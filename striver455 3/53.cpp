#include<iostream>
using namespace std;
int main(){
    vector<int> hrr={1,4,3,6,2,9};
    hrr.erase(hrr.begin()+2);
    for(int jo:hrr){
        cout<<jo;
    }
    return 0;
}