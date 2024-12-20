#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l = 0, r = n-1, ans = n;
        while(s[l]!=s[r] && ans>0){
            //ans>0 to ensure loop stops when l>=r
            ans = ans-2;
            l++;
            r--;
        }                
        cout<<ans<<endl;
    }
    return 0;
}