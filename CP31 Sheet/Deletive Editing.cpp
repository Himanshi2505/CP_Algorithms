#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s ,t;
    cin>>s>>t;

    map<char,int> m1,m2;

    for(auto it:s){
        m1[it]++;
    }
    for(auto it:t){
        m2[it]++;
    }

    int i=0,j=0;
    while(i<s.size() && j<t.size()){
        if(s[i]==t[j]){

            if(m1[s[i]] < m2[t[j]]){
                break;
            }

            if(m1[s[i]] == m2[t[j]]){
                //match;
                m2[t[j]]--;
                j++;
            }
        }
        m1[s[i]]--;
        i++;
    }

    if(j==t.size()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

}
int main(){
    int n;
    cin>>n;
    while(n--){
        solve();
    }
    return 0;
}