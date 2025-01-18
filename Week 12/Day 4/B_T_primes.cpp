#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
bool isPrime(ll x){
    if(x==1){
        return false;
    }
    for(int i=2;i<=sqrtl(x);i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
bool isperfect(ll n){
    ll x=sqrtl(n);
    return (x*x)==n;
}
int main(){
    fast_io
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        ll x;
        cin>>x;
        if(isperfect(x)&& isPrime(sqrt(x))){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}