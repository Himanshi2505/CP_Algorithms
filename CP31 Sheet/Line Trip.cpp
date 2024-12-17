#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int maxDist = INT_MIN;
        if(n==1){
            maxDist = a[0];
        }
        else{
            int dist=a[0];
        for(int i=1;i<n;i++){
            maxDist = max(maxDist, max((abs(a[i] - a[i-1])),dist));
        }
        }
       // cout<<maxDist<<endl;
        int y = 2*(x - a[n-1]);
       // cout<<y<<endl;
        int ans = max(maxDist,y);
        cout<<ans<<endl;

    }
    return 0;
}