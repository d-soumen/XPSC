#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        // if(n>m){
        //     cout<<"NO\n";
        //     continue;
        // }
        vl a(n);
        ll sum=0,mx=0,mn=INT_MAX;
        fl(i,n){
            cin>>a[i];
            sum+=a[i];
            mn=min(mn,a[i]);
            mx=max(mx,a[i]);
        }
        if(n+sum-mn+mx<=m) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}