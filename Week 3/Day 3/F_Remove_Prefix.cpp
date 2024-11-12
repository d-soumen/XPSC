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
    vec a(n);
    set<int>s;
    fl(i,n){
        cin>>a[i];
    }
    int ans=0;
    for(int i=n-1;i>=0;i--){
        if(s.count(a[i])){
            break;
        }
        s.insert(a[i]);
        ans=i;
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