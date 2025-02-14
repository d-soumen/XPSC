#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

void solve(){
    int n;
    cin>>n;
    map<int,int>mp;
    ll ans=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        x-=i;
        ans+=mp[x];
        mp[x]++;
    }
    cout<<ans<<endl;

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