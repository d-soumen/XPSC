#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    ll n,x;
    cin>>n>>x;
    vl a(n);
    fl(i,n) cin>>a[i];
    map<ll,ll>mp;
    ll sum=0,cnt=0;
    mp[0]=1;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(mp.find(sum-x)!=mp.end()){
            cnt+=mp[sum-x];
        }
        mp[sum]++;
    }
    cout<<cnt<<endl;
    return 0;
}