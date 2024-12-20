#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k; //bcz i was using int it was not getting accepted
        cin>>n>>k;
        bool divisible = true;
        if(n%2==1 && k%2==0){
            cout<<"No"<<endl;
        }
        else if(n%2==0) cout<<"YES"<<endl;
        else if(n%2!=0 && k%2!=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

