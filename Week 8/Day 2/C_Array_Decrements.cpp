#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
bool ok(vec a,vec b,int n){
    
    int df=INT_MAX;
    for(int i=0;i<n;i++){
        if(b[i]>0)
            df=min(df,a[i]-b[i]);
    }
    if(df<0)
        return false;
    fl(i,n){
        if(b[i]!=0 && a[i]-b[i]<df) return false;
        if(a[i]-b[i]>df) return false;
    }
    return true;
}
void solve(){
    
    int n;
    cin>>n;
    vec a(n),b(n);
    fl(i,n) cin>>a[i];
    fl(i,n) cin>>b[i];

    if(ok(a,b,n)) cout<<"YES\n";
    else cout<<"NO\n";
    

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