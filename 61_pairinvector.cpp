#include<iostream>
#include<list>
using namespace std;
int main(){
    vector<pair<int,int>>v={{1,2},{2,5},{6,9}};
    //vector k and ar bhi ham pair store kara skte h
    v.push_back({3,4});
    v.emplace_back(8,9);//emplace_back m pair bana k bhejne ki zarurat ni 
    for(auto p:v){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}