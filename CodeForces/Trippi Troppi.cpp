#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s,t,u;
        cin>>s>>t>>u;

    char first = s[0];
    char second = t[0];
    char third = u[0];

    string ans = "";
        ans += first;
        ans += second;
        ans += third;
        
        cout<<ans<<endl;
    }
    return 0;
}