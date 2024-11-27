#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve(){
    int n;
    int XOR=0;
    cin>>n;
    vec v(n);
    fl(i,n){
        cin>>v[i];
        XOR^=v[i];
    }
    int ans=XOR;
    fl(i,n){
        int cur=(XOR^v[i]);
        ans=min(ans,cur);
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