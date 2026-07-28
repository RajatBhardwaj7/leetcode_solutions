#include<iostream>
#include<list>
using namespace std;
int main(){
    pair<int,pair<int,char>>p={1,{2,'z'}};
    cout<<p.first<<endl;
    cout<<p.second.first<<endl;
    cout<<p.second.second<<endl;
    
    

    return 0;
}//pairs of pair