#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vec a(n);
    vec h(n);
    fl(i,n) cin>>a[i];
    fl(i,n) cin>>h[i];
    int l=0,r=0,ans=0,sum=0;
    while(r<n){
        if(h[r-1]%h[r]==0){
            sum+=a[r];
        }
        else{
            l=r;
            sum=a[r];
        }
        while(l<n && sum>k){
            sum-=a[l];
            l++;
        }
        ans=max(ans,r-l+1);
        r++;
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