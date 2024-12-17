#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x = INT_MAX;
    int y = 0;
    for(int i=0;i<n;i++){
        x = min(abs(a[i]),x);
    }
    
    cout<<x<<endl;

    return 0;
}