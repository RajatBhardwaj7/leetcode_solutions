#include<iostream>
#include <map>
using namespace std;
int main(){
    map<string,int> m;
    m["yoyo"]=100;
    m["doll"]=40;
    m["football"]=1000;
    m.insert({"bat",49});
    m.emplace("lol",4);
    m.erase("doll");
    for(auto k:m){
        cout<<k.first<<" "<<k.second<<endl;
    }
    if(m.find("yoy")!=m.end()){
        cout<<"mil gya"<<endl;
    }
        else{
            cout<<"ni mila"<<endl;
        }
         


    
   
    return 0;
}//keys k sorted order m print hue h