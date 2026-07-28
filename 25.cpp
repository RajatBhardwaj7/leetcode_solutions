#include<iostream>
using namespace std ;
int main(){
    int marks[]={1,3,-5,7,9};
    int size=5;
    int smallest= INT_MAX;
    for (int i=0; i<=size;i++){
        if (marks[i]<smallest){
            smallest=marks[i];
        }
    }
    cout<<smallest<<endl;
    return 0;

    
}