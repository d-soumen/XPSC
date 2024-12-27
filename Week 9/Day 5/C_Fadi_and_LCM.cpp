#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
ll LCM(ll a,ll b){
    return ((a/__gcd(a,b))*b);
}
int main(){
    fast_io
    ll x;
    cin>>x;
    ll ans;
    for(ll i=1;i<=sqrt(x);i++){
        if(LCM(i,x/i)==x){
            ans=i;
        }
    }
    cout<<ans<<" "<<x/ans<<endl;
    return 0;
}