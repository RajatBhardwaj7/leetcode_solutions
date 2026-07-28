#include<iostream>
using namespace std;
int main(){
    vector<int> gy={3,5,6,1,0};
    
    for(auto it=gy.begin();it!=gy.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}
//or reverse k liye rbegin and rend