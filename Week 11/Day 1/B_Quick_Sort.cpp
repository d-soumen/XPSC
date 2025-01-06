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
    vec a(n);
    fl(i,n) cin>>a[i];
    int cnt=1;
    for(int i=0;i<n;i++){
        if(a[i]==cnt) cnt++;
    }
    cout<<(n-cnt+k)/k<<endl;
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