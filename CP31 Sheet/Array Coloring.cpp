#include <bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    int t;
    cin >> t;
    while(t--){
       int n;
       cin>>n;
       int count=0;
       int a[n];
       for(int i=0;i<n;i++){
           cin>>a[i];
           if(a[i]%2!=0){
               count++;}
           }
           if(count%2==0){
               cout<<"yes"<<endl;
           }
           else{cout<<"no"<<endl;}
       
      
       }
    return 0;
}