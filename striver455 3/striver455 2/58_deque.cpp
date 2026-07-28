#include<iostream>
#include<list>
#include<deque>
using namespace std;
int main(){
    deque<int> l;
    l.push_back(1);
    l.push_back(3);
    l.push_back(2);
    l.push_back(6);
    l.push_back(0);
    for(int n:l){
        cout<<n;
    }

    return 0;
}//sab same h