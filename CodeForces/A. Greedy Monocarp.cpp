#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
          sort(arr.begin(),arr.end(), greater<int>() );
        int sum = 0, ans = 0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum<=k){
                ans = k-sum;
            }
            else{
                break;
            }
        }
        cout<<ans<<endl;
    }
}

