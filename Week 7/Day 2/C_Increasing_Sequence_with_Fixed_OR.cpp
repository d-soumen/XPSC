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
    deque<ll>dq;
    for(int k=0;k<=__lg(n);k++){
        if((n>>k)&1){
            ll val=n-(1LL <<k);
            if(val>0){
                dq.push_front(val);
            }
        }
    }
    dq.push_back(n);
    cout<<dq.size()<<endl;
    for(auto it:dq){
        cout<<it<<" ";
    }
    cout<<"\n";
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