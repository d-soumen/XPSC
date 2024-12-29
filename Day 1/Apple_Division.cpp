#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void apple_div(ll i, ll n, ll sum1,ll sum2,vector<ll>&a,ll &mn){
    if(i==n)
    {
        mn=min(mn,abs(sum1-sum2));
        return;
    }
    apple_div(i+1,n,sum1+a[i],sum2,a,mn);
    apple_div(i+1,n,sum1,sum2+a[i],a,mn);
}
int main(){
    fast_io
    ll n;
    cin>>n;
    vl a(n);
    fl(i,n) cin>>a[i];
    ll mn=INT_MAX;
    apple_div(0,n,0,0,a,mn);
    cout<<mn<<endl;
    return 0;
}