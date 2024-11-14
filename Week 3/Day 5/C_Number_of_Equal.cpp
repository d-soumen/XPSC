#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    int n,m;
    cin>>n>>m;
    vec a(n);
    fl(i,n){
        cin>>a[i];
    }
    vec b(m);
    fl(i,m){
        cin>>b[i];
    }
    ll l=0,r=0,ans=0;
    while(l<n && r<m){
        int cur=a[l],cnt1=0,cnt2=0;
        while(l<n && a[l]==cur){
            cnt1++;
            l++;
        }
        while(r<m && cur>b[r]){
            r++;
        }
        while(r<m && b[r]==cur){
            cnt2++;
            r++;
        }
        ans+=(1LL* cnt1*cnt2);
    }
    cout<<ans<<endl;
    return 0;
}