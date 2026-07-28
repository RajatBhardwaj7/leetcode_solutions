#include<iostream>
using namespace std;
void platform(int arr[], int dep[],int n){
    int platform_needed=1,max_platform=1;
    int i=1,j=0;
    while(i<n &&j<n){
        if(arr[i]<=dep[j]){
            platform_needed++;
            i++;
            if(platform_needed>max_platform){
                max_platform=platform_needed;

            }
            else{
                j++;
                platform_needed--;
            }
        }
    }
    cout<<max_platform;
}
int main(){
int Arrival[] = {900, 940, 950, 1100, 1500, 1800};
int Departure[] = {910, 1200, 1120, 1130, 1900, 2000};
int n = sizeof(Arrival)/sizeof(Arrival[0]);
platform(Arrival,Departure,n);
return 0;

}