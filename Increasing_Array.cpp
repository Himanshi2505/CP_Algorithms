#include<bits/stdc++.h>
using namespace std;

int main(){
long long n;
cin>>n;
long long a[n];
for(long long i=0;i<n;i++){
    cin>>a[i];
}
long long cnt = 0;
for(long long i=1;i<n;i++){
    if(a[i]<a[i-1]){
        cnt+= (a[i-1]-a[i]);
        a[i] = a[i-1];
    }
}
  cout<<cnt<<endl;
  
} 