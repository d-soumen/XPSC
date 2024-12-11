#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
const int B=30;
void solve(){
    int n,K;
    cin>>n>>K;
    vec a(n);
    fl(i,n) cin>>a[i];
    vec bits(B+1);
    for(int i=0;i<n;i++){
        for(int k=B;k>=0;k--){
            if((a[i]>>k)&1){
                bits[k]++;
            }
        }
    }
    int ans=0;
    for(int k=B;k>=0;k--){
        if(bits[k]==n){
            ans+=(1LL << k);
        }
        else{
            int need=n-bits[k];
            if(K>=need){
                ans+=(1LL <<k);
                K-=need;
            }
        }
    }
    cout<<ans<<endl;
}
int main(){
    fast_io
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}