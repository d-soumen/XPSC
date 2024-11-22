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
    ll r=0,l=0,ans=0;
    multiset<ll>ml;
    while(r<n){
        ml.insert(a[r]);
        ll mn=*ml.begin();
        ll mx=*ml.rbegin();
        if(mx-mn <=k){
            ans+=(r-l+1);
        }
        else{
            while(l<=r){
                mn=*ml.begin(),mx=*ml.rbegin();
                if(mx-mn<=k){
                    break;
                }
                ml.erase(ml.find(a[l]));
                l++;
            }
            mn=*ml.begin(),mx=*ml.rbegin();
            if(mx-mn<=k){
                ans+=(r-l+1);
            }
        }
        r++;
        
        
    }
    cout<<ans<<endl;
    return 0;
}