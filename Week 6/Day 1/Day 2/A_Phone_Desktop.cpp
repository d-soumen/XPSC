#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve(){
    int x,y;
    cin>>x>>y;
    int mn=(y+1)/2;
    x-=(15*mn-4*y);
    x=max(x,0);
    mn+=(x+15-1)/15;
    cout<<mn<<endl;
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