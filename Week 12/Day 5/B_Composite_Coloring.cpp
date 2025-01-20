#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
vector<int>allPrime={2,3,5,7,11,13,17,19,23,29,31};
void solve(){
    int n;
    cin>>n;
    vec a(n);
    fl(i,n) cin>>a[i];
    map<int,vector<int>>mp;
    for(int i=0;i<n;i++){
        for(int j=0;j<11;j++){
            if(a[i]%allPrime[j]==0){
                mp[allPrime[j]].push_back(i);
                break;
            }
        }
    }
    vector<int>ans(n);
    int color=1;
    for(auto [x,y]:mp){
        for(auto pos:y){
            ans[pos]=color;
        }
        color++;
    }
    cout<<mp.size()<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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