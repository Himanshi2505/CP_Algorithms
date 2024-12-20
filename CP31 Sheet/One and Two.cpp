// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int a[n];
//         int cnt = 0;
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//             if(a[i]==2) cnt++;
//         }
//         int k=-1;
//         int cnt1=0;
//         if(cnt==0) cout<<1<<endl;
//         if(cnt%2==1) cout<<-1<<endl;
//         else{
//         for(int i=0;i<n;i++){
//             if(a[i]==2){
//                 cnt1++;
//                 if(cnt1==cnt/2){
//                     k=i;
//                     break;
//                 }
//             }
//         }
//         }
//         cout<<k<<endl;
//     }
//     return 0;
// }

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
        int l_cnt=0;
        int r_cnt = count(a.begin(),a.end(),2);
        bool found = false;
        for(int k=0;k<n-1;k++){
            if(a[k]==2){
                r_cnt--;
                l_cnt++;
            }
            if(l_cnt==r_cnt){
                cout<<k+1<<endl;  //k+1 to give 1 based indexing
                found = true;
                break;
            }
        }
        if(!found) cout<<-1<<endl;
    }
    return 0;
}