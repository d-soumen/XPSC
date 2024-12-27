#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int GCD(int a,int b){
    return __gcd(a,b);
}
int main(){
    fast_io
    ll n;
    cin>>n;
    vl a(n);
    fl(i,n) cin>>a[i];
    ll sum=0;
    for(ll i=0;i<n;i++){
        sum+=a[i];
    }
    ll mx=*max_element(a.begin(),a.end());
    ll gc=mx-a[0];
    for(int i=1;i<n;i++){
        gc=GCD(gc,mx-a[i]);
    }
    ll ans=(mx*1LL*n-sum)/gc;
    cout<<ans<<" "<<gc<<endl;
    return 0;
}