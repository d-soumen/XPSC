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
    vec a(n);
    fl(i,n) cin>>a[i];
    int ans=INT_MIN;
    fl(i,n){
        ans=max(ans,a[(i-1+n)%n]-a[i]);
    }
    for(int i=1;i<n;i++){
        ans=max(ans,a[i]-a[0]);
    }
    for(int i=0;i<n-1;i++){
        ans=max(ans,a[n-1]-a[i]);
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