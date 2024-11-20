#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve(){
    ll a,b,n,s;
    cin>>a>>b>>n>>s;
    if(s%n<=b && 1ll*a*n+b>=s){
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";
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