#include<iostream>
using namespace std;

void sjf(int arr[], int n){

    // Step 1: Sort burst times (Bubble Sort)
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

  int sum = 0;
   int wait = 0;

   for(int i = 1; i < n; i++){
       wait += arr[i - 1];   
       sum += wait;          
   }

   cout << sum / n;  
}


int main(){
    int arr[] = {4, 1, 3, 7, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    sjf(arr, n);
    return 0;
}
