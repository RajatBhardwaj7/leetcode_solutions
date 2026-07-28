#include<iostream>
#include <map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    m.emplace("yoyo",40);
    m.emplace("doll",60);
    m.emplace("gigi",80);
    for (auto k:m){
        cout<<k.first<<" "<<k.second<<endl;
    }

    
         


    
   
    return 0;
}//keys k sorted order m print hue h
//main difference yai h ki yai jada use hota h coz of time complexity