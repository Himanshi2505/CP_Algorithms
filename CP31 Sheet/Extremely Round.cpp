#include<bits/stdc++.h>
using namespace std;

bool check(int x){
    int cnt = 0;
    while(x>0){
        if(x%10!=0){
            cnt++;
        }
        x/=10;
    }
    return cnt == 1;
}
int main(){
    //Precompute all numbers that satisfy the condition
    vector<int> a;
    for(int i=1;i<1000000;i++){
        if(check(i)) {
            a.push_back(i);
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = 0;

        for(int x : a){
            if(x>n) break;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}