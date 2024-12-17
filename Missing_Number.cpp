#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin>>n;
     int a[n-1];
     for(int i=0;i<n-1;i++){
        cin>>a[i];
     }
     int x = 0;
     for(int i=1;i<=n;i++){
          x^=i;
     }
     for(int i=0;i<n-1;i++){
          x^=a[i];
     }

     cout<<x<<endl;
}