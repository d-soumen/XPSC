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
    fl(i,n) cin>>a[i];
    int x=0;
    fl(i,n){
        x=a[i]^x;
    }
    if(x==0){
        cout<<0<<endl;
    }
    else if(n%2!=0){
        cout<<x<<endl;
    }
    else{
        cout<<-1<<endl;
    }
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