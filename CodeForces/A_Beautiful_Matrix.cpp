#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define all(x) x.begin(),x.end()
using namespace std;
const int mod = 1e9 + 7;
 
void solve() {
  vector<vector<int>> v(6,vector<int>(6));
  int indi = 0, indj = 0;
  for(int i=1;i<=5;i++){
    for(int j =1;j<=5;j++){
        cin>>v[i][j];
        if(v[i][j] == 1){
            indi = i;
            indj = j;
      }
    }
  }
  int ans = abs(3 - indi) + abs(3 - indj);
  cout<<ans<<endl;
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