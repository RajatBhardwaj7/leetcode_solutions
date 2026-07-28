#include<iostream>
using namespace std;
void lamonade(int arr[],int n){
    int firstchange=0;
    for(int i=0;i<n;i++){
        if(arr[i]==5){
            firstchange+=5;
            
        }
        else if(arr[i]==10){
            if(firstchange>=5){
                firstchange-=5;
            }
            else{
                cout<<"false";
                return;
            }
        }
        else if(arr[i]==20){
            if(firstchange>=15){
                firstchange-=15;
            }
            else{
                cout<<"false";
                return;
            }
        }
    }
}
int main(){
    int arr[]={5,5,10,5,20};
    lamonade(arr,4);
    return 0;
}