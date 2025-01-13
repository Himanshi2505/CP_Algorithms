//Pseudo code
// 1] Pick element with maximum frequency.
// 2] Clone and swap until a copy is filled with this element.

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<long long> a(n);
    map<long long, int> mp;

    for(int i=0;i<n;i++){
        cin>>a[i];

        mp[a[i]]++;

    }

    int freq = 0;
    for(auto it: mp){
        freq =  max(freq, it.second);
    }

    int ops = 0;

    while(freq<n){
        ops++;   //clone
        
        if(n-freq >= freq){
            ops+=freq;  //swap
            freq*=2;
        }
        else{
            ops+= (n-freq);
            freq = n;
        }
    }
    cout<<ops<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}