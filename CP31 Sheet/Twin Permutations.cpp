#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        //a1+b1=a2+b2=--------an+bn = n+1
        for(int i=0;i<n;i++){
            cout<<n+1-a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}