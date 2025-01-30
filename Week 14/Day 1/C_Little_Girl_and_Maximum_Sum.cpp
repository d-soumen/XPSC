#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    int n,q;
    cin>>n>>q;
    vec a(n);
    fl(i,n) cin>>a[i];
    vector<int>d(n+1);
    while(q--){
        int l,r;
        cin>>l>>r;
        l--,r--;
        d[l]++;
        d[r+1]--;
    }
    for(int i=1;i<=n;i++){
        d[i]=d[i-1]+d[i];
    }
    sort(a.rbegin(),a.rend());
    sort(d.rbegin(),d.rend());
    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=(1LL* a[i]*d[i]);
    }
    cout<<ans<<endl;
    return 0;
}