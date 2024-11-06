#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    map<int,set<int>>mp;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        mp[x].insert(i);
    }
    for(int i=1;i<=k;i++){
        int s,e;
        cin>>s>>e;
        if((mp.find(s)==mp.end())||(mp.find(e)==mp.end())){
            cout<<"NO\n";
        }
        else{
            int SI,ES;
            SI=*mp[s].begin();
            ES=*mp[e].rbegin();

            if(SI<ES){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
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