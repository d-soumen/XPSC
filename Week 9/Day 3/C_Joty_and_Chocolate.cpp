#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int lcm(int a,int b){
    return (a/__gcd(a,b))*b;
}
int main(){
    fast_io
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    ll cnta=(n/a)*p,cntb=(n/b)*q, overlap=n/lcm(a,b);
    ll ans=((cnta+cntb)-(overlap*(p+q))+overlap*(max(p,q)));
    cout<<ans<<endl;
    return 0;
}