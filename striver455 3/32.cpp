#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"hello world "<<endl;
    cin.getline(str,100);
     //str ,100, (delimiter use hota h jab b koi user ek pertucular ciz likhe toh input ena band karde)
     for (char ch : str){
        cout<<ch<<" ";
     }
    cout<<endl;

    return 0;

}
