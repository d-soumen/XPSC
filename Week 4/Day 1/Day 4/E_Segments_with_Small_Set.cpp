#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    ll n,k;
    cin>>n>>k;
    vl a(n);
    fl(i,n) cin>>a[i];
    map<ll,ll>mp;
    ll r=0,l=0,ans=0,cnt=0;
    while(r<n){
        mp[a[r]]++;
        if(mp[a[r]]==1){
            cnt++;
        }
        while(cnt>k){
            mp[a[l]]--;
            if(mp[a[l]]==0)
                cnt--;
            l++;
        }
        
        ans+=(r-l+1);
        r++;
    }
    cout<<ans<<endl;
    
    return 0;
}