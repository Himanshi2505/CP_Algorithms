#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        if(a.back() == a[0]){
            cout<<"-1"<<endl;
        }
        else{
            int it=0;
            while(a[it] == a[0]){
                it++;
            }
            cout<<it<<" "<<n-it<<endl;
            for(int i=0;i<it;i++) cout<<a[i]<<" ";
            cout<<endl;
            for(int i=it;i<n;i++) cout<<a[i]<<" ";
        }

    }
    return 0;
}