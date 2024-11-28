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
    fl(i,n){
        cin>>v[i];
    }
    int z=0,nz=0;
    fl(i,n){
        if(v[i]==0){
            z++;
        }else{
            nz++;
        }
    }
    int ans;
    if(z==0){
        ans=0;
    }
    else{
        if(nz>=z-1){
            ans=0;
        }
        else{
            int mx=*max_element(v.begin(),v.end());
            if(mx==1){
                ans=2;
            }
            else{
                ans=1;
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