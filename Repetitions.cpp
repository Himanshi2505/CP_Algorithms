#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.size();
    int cnt = 1, ans = 1;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            cnt++;
        }
        else cnt = 1;

        ans = max(ans, cnt);
    }
    cout<<ans;
}