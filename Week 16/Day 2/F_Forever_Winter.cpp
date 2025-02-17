#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    map<int,set<int>>g;
    for(int i=1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        g[u].insert(v);
        g[v].insert(u);
    }
    int leaf=-1,parnode=-1;
    for(int i=1;i<=n;i++){
        if(g[i].size()==1){
            leaf=i;
            break;
        }
    }
    int x,y;
    for(int i=1;i<=n;i++){
        if(g[i].find(leaf)!=g[i].end()){
            y=g[i].size()-1;
            parnode=i;
            break;
        }
    }
    for(int i=1;i<=n;i++){
        if(g[i].find(parnode)!=g[i].end()&& g[i].size()>1){
            x=g[i].size();
            break;
        }
    }
    cout<<x<<" "<<y<<endl;
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