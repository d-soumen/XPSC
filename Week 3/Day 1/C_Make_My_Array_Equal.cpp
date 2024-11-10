#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve(){
    ll n;
    cin>>n;
    vl a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<ll,ll>mp;
    ll cnt=0;
    for(auto it:a){
        if(it!=0 && mp.find(it)==mp.end()){
            mp[it]++;
            cnt++;
        }
    }
    if(cnt<=1){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    
}
int main(){
    fast_io
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}