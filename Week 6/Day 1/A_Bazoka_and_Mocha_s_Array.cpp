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
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bool flag=false;
    for(int i=0;i<n;i++){
        int a=0;
        bool ok=true;
        for(int j=i;j<n;j++){
            if(v[j] < a) ok=false;
            a=v[j];
        }
        for(int j=0;j<i;j++){
            if(v[j]<a) ok=false;
            a=v[j];
        }
        flag=flag||ok;
    }
    if(flag)cout<<"Yes\n";
    else cout<<"No\n";
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