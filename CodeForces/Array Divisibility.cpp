#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n+1,0);
        for(int i=1;i<=n;i++){
            arr[i]= i;
        }
        for(int i=1;i<=n;i++){
            cout<<arr[i]<< " ";
        }
        cout<<endl;
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
 
// int main() {
//     int t=1;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         for (int i=1;i<n+1;i++) {
//             cout<<i<<" ";
//         }
//         cout<<"\n";
//     }
// return 0;
// }