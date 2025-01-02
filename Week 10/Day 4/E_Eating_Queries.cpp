#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve(){
    int n,q;
    cin>>n>>q;
    vec a(n);
    fl(i,n) cin>>a[i];
    sort(a.rbegin(),a.rend());
    vec pre(n+1);
    for(int i=1;i<=n;i++){
        pre[i]=pre[i-1]+a[i-1];
    }
    while(q--){
        int k,ans=-1;
        cin>>k;
        auto it=lower_bound(pre.begin(),pre.end(),k);
        if(it!=pre.end()){
            ans=it-pre.begin();
        }
        cout<<ans<<endl;
    }
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