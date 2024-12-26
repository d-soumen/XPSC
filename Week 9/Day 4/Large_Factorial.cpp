#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
const int MOD=1e9+7;
int main(){
    fast_io
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=1;
        for(int i=1;i<=n;i++){
            ans=(1LL * ans%MOD *i%MOD)%MOD;
        }
        cout<<ans<<endl;
    }
    return 0;
}