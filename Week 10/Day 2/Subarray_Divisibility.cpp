#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    ll n;
    cin>>n;
    vl a(n);
    fl(i,n) cin>>a[i];
    map<ll,ll>mod;
    mod[0]=1;
    ll sum=0,cnt=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        ll md=(sum%n+n)%n;
        if(mod.find(md)!=mod.end()){
            cnt+=mod[md];
        }
        mod[md]++;
    }
    cout<<cnt<<endl;
    return 0;
}