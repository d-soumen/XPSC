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
    vl v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    multiset<ll,greater<ll>>s;
    ll ans=0;
    for(int i=0;i<n;i++){
        if(v[i]!=0){
            s.insert(v[i]);
        }
        else{
            if(s.size()!=0){
                ans=ans+*s.begin();
                s.erase(s.begin());
            }
        }
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