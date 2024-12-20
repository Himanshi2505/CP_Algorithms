#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int x = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            x^=a[i];
        }
        if(n%2==0){
            if(x==0) cout<<1<<endl;
            else cout<<-1<<endl;
        }
        else{
            cout<<x<<endl;
        }
    }
    return 0;
}