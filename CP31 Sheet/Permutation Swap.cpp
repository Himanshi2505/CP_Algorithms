#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p[n+1]; //1 based indexing so n+1
        int k = 0;
        for(int i=1;i<=n;i++){
            cin>>p[i];
        }

        for(int i=1;i<=n;i++){
            k = __gcd(abs(p[i]-i),k);
        }
        cout<<k<<endl;

    }
}