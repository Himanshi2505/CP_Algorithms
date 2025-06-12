/*Aim : Minimize the maximum value of the sequence*/
// [l,r]
// 1 & 0 -> 0
// 0 & 1 -> 0
// 0 & 0 -> 0
// 1 & 1 -> 1

// arr: a1 a2 a3 a4

// a1&a2 <= min(a1,a2)
// 101010
// 111101
// after doing & of these numbers:
// 101000


// a1&a2&a3&a4.....an
// somehow if I can get this -> &1....n

// arr:     a1  a2  a3  a4
// l=1, r=4 &14 &23 &23 &14
// l=1, r=2    &1234 &1234 &1234 &1234

// this is the smallest value possible , and of all elements
// you have minimized the maximum value


#include <bits/stdc++.h>
using namespace std;
 
 
void solve(){
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int ans = arr[0];
    for(int i=1;i<n;i++){
        ans = ans & arr[i];
    }
    cout<<ans<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
  return 0;
}