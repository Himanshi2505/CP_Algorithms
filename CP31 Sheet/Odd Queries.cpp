#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<long long> a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        vector<long long> psum(n+1);
        for(int i=1;i<=n;i++){
            psum[i] = psum[i-1]+a[i];
        }

        while(q--){
            long long l,r,k;
            cin>>l>>r>>k;

            long long sum = psum[l-1] + psum[n] - psum[r] +(r-l+1)*k;

            if(sum%2==1){
                cout<<"yes"<<endl;
            }
            else cout<<"no"<<endl;
        }

    }
    return 0;
}