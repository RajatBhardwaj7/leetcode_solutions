#include<iostream>
using namespace std;
int main(){
    vector<int> gy={3,5,6,1,0};
    vector<int>::reverse_iterator it;//is tam jam ki jaga bs auto likh k khatam krdo
    for(it=gy.rbegin();it!=gy.rend();it++){
        cout<<*it<<endl;
    }
    return 0;
}
//yai reverse k liye th