#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    ll n,k;
    cin>>n>>k;
    vl a(n);
    fl(i,n)cin>>a[i];
    ll l=0,r=0,ans=0,sum=0;
    while(r<n){
        sum+=a[r];
        while(sum>=k){
            ans+=n-r;
            sum-=a[l];
            l++;
        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}