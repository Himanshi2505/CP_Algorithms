#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        string res="NO";
        long long r;
        if(n%2==0){
            r=k/2;
        }
        else{
            r=(k+1)/2;
        }
        if(r%2==0) res="YES";
        cout<<res<<endl;
    }
}