// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int m;
//     cin>>n>>m;
//     if(n>m){
//         int gdc=n%m;
//         cout<<gdc<<endl;
//     }
//     else{
//         int gdc=m%n;
//         cout<<gdc<<endl;
//     }

//     return 0;


// }
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    while(m!=0){
        int rem=n%m;
        n=m;
        m=rem;
    }
    cout<<n<<endl;
    return 0;


}