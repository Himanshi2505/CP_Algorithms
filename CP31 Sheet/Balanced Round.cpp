#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        long long cnt=1;
        long long maxcnt = 1;
 
            for(int i=1;i<n;i++){
                if(a[i]-a[i-1]<=k){
                    cnt++;
                }
                else{
                    cnt = 1;
                }
                maxcnt = max(cnt,maxcnt);
            }
            cout<<n-maxcnt<<endl;

    }
    return 0;
}