#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int maxi = a[n] - a[1];
    //fix a[n];
      for(int i=1;i<=n-1;i++){
        maxi = max(maxi,a[n]-a[i]);
      }
      //fix a[1];
      for(int i=2;i<=n;i++){
        maxi = max(maxi,a[i] - a[1]);
      }

      //pick entire array as a subsegment
      for(int i=1;i<=n-1;i++){
        maxi = max(maxi,a[i] - a[i+1]);
      }
      cout<<maxi<<endl;
        
    }
    return 0;
}