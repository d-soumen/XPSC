#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve(){
    int n,q;
    cin>>n>>q;
    vec a(n);
    fl(i,n) cin>>a[i];
    vec x;
    for(int i=0;i<q;i++){
        int v;
        cin>>v;
        if(x.empty()|| x.back()>v){
            x.push_back(v);
        }
    }
    fl(i,n){
        for(auto it:x){
            if(a[i]%(1<<it)==0){
                it=it-1;
                a[i]+=(1<<it);
            }
        }
    }
    for(auto val:a){
        cout<<val<<" ";
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