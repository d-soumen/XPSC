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
    vec a;
    for(int i=0;i<k;i++){
        a.push_back(n-i);
    }
    for(int i=0;i<n-k;i++){
        a.push_back(i+1);
    }
    reverse(a.begin(),a.end());
    for(int val:a){
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