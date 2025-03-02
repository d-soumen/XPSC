#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vec a(n);
        fl(i,n) cin>>a[i];
        int rob_gold=0,cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]>=k){
                rob_gold+=a[i];
            }
            else if(a[i]==0 && rob_gold>0){
                rob_gold--;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}