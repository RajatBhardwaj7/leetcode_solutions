#include<iostream>
using namespace std;
int main(){
    vector<int> tim={1,2,3,4};
    vector<int>::iterator it;
    for(it=tim.begin();it!=tim.end();it++){
        cout<<*it<<endl; //we can also use *(it) usse farak ni padega
    }
    return 0;
}

//so basically yai vector ka loop h
//yai forward k liye th