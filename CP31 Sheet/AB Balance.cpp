#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;

        if(!s.empty()){
            cout<<s.back()<<s.substr(1)<<endl;
        }

    }
    return 0;
}