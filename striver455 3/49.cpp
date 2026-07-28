#include<iostream>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(10);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    for(int jac:vec){ //yai jac ki jagah kuch b daal skte ho
        cout<<jac;
    }

    return 0;
}