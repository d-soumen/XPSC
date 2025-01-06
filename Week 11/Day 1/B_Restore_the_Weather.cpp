#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vp vector<pair<int,int>>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vp a(n);
    vec b(n),ans(n);
    fl(i,n){
        cin>>a[i].first;
        a[i].second=i;
    }
    fl(i,n) cin>>b[i];
    
    sort(b.begin(),b.end());
    sort(a.begin(),a.end());
    fl(i,n){
        ans[a[i].second]=b[i];
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
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