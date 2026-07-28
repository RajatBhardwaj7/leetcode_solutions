#include<iostream>
using namespace std;
void printy(int n){
    if(n==0){
        return ;
    }
    cout<<n<<endl;
    printy(n-1);
}
int main(){
    int n=6;
    
    printy(n);
    return 0;
}
