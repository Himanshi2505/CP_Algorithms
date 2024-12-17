#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool sorted = true;
        int diff = INT_MAX;
        for(int i=1;i<n;i++){
            diff = min((a[i] - a[i-1]),diff);
            sorted &= a[i]>=a[i-1];
        }
        if(!sorted){
            cout<<"0"<<endl;
            continue;
        }
        cout<<diff/2 + 1<<endl;
    }
    return 0;

}