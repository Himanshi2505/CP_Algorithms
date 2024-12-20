#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int len = 0;
        int maxlen = 0;
        for(int j=0;j<n;j++){
            if(a[j]==0){
                len++;
                maxlen = max(len,maxlen);
            }
            else len = 0;     
        }  
        cout<<maxlen<<endl;
        
    }
    return 0;
}
