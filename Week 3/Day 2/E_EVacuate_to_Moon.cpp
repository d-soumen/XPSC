#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve(){
    ll n,m,h;
    cin>>n>>m>>h;
    vl v(n);
    fl(i,n){
        cin>>v[i];
    }
    vl ch(m);
    fl(i,m){
        cin>>ch[i];
    }
    sort(v.begin(),v.end(),greater<int>());
    sort(ch.begin(),ch.end(),greater<int>());
    ll ans=0;
    for(int i=0;i<min(n,m);i++){
        ans+=min(ch[i]*h,v[i]);
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