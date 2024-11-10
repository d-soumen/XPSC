#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve(){
    int n;
    cin>>n;
    vec v(n);
    fl(i,n){
        cin>>v[i];
    }
    if(n==3){
        cout<<0<<endl;
        return;
    }
    sort(v.begin(),v.end());
    int ans=(v[n-1]-v[2]);
    ans=min(ans,v[n-2]-v[1]);
    ans=min(ans,v[n-3]-v[0]);
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