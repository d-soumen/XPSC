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
    ll l=0,r=0,cnt=0;
    while(r<n){
        mp[a[r]]++;
        while(mp.size()>k){
            mp[a[l]]--;
            if(mp[a[l]]==0){
                mp.erase(a[l]);
            }
            l++;
        }
        cnt+=(r-l+1);
        r++;
    }
    cout<<cnt<<endl;
    return 0;
}