#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define all(x) x.begin(),x.end()
using namespace std;
const int mod = 1e9 + 7;
 
void solve() {
  int n;
  cin>>n;
  vector<int> v;
  int y=1;
  while(n>0){
    int x = n%10;
    if(x!=0){
        x = x*y;
        v.push_back(x);
    }
    y *= 10;
    n /= 10;
  }
  cout<<v.size()<<endl;
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}   
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}