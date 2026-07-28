#include<iostream>
using namespace std;
void printnum(int n,int N){
    if(n>N){
        return ;

    }
    cout<<n<<endl;
    printnum(n+1,N);
}
int main(){
    int N;
    cin>>N;
    printnum(1,N);
    return 0;
}
    