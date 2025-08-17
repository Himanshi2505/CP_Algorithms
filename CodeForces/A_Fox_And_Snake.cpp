#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define all(x) x.begin(),x.end()
using namespace std;
const int mod = 1e9 + 7;
 
void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<char>> v(n,vector<char>(m,'.'));
    for(int i=0;i<n;i+=2){
        for(int j=0;j<m;j++){
            v[i][j] = '#';
        }
    }
    for(int i=1;i<n;i+=4){
        v[i][m-1] = '#';
    }
    for(int i=3;i<n;i+=4){
        v[i][0] = '#';
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }
}   
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}