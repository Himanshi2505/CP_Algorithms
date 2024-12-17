#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long x,y;
        cin>>x>>y;
       // int cnt = 0;
        if(y<x) swap(x,y);
        int res=n/x;
        if(n%x!=0)++res;
         cout<<res<<endl;
    }
}