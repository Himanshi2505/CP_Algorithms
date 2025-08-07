#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define all(x) x.begin(),x.end()
using namespace std;
const int mod = 1e9 + 7;

void solve() {
    string s;
    cin>>s;

    int cnt0 = 0, cnt1 = 0;
    for(char c: s){
        if(c == '0') cnt0++;
        else cnt1++;
    }
    for(int i=0;i<s.size();i++){

        if(s[i] == '0'){
            if(cnt1 == 0){
                cout<<s.size() - i<<endl;
                break;
            }
            cnt1 -- ;
        }
        if(s[i] == '1'){
            if(cnt0 == 0){
                cout<<s.size() - i<<endl;
                break;
            }
            cnt0--;
        }
        if(i==s.size()-1){
            cout<<0<<endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
