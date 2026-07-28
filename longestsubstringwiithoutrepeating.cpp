#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();
    int maxlen=0;
    for(int i=0;i<n;i++){
        int count=0;
        int freq[256]={0};
        for(int j=i;j<n;j++){
            if(freq[s[j]]==1){
                break;
            }
            else{
                freq[s[j]]++;
                count++;
                maxlen=max(maxlen,count);
            }
        }
    }
    cout<<maxlen;
    return 0;
    
}
