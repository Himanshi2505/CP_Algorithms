#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
          
        long long len = 0;
        long long maxlen = 0;

       for(int i=1;i<=n;i++){
        if(n%i==0){
            len++;
        }
        else{
            break;
        }
        //finding smallest i that does not divide n because all other intervals ahead will have multiples of i, so max length will be i-1
       }
       cout<<len<<endl;

    }
    return 0;
}