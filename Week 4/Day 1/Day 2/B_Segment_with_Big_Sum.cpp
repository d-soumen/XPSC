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
    vl v(n);
    fl(i,n){
        cin>>v[i];
    }
    ll l=0,r=0,sum=0,ans=n+1;
    while(r<n){
        sum+=v[r];
        while(sum-v[l]>=k){
            sum-=v[l];
            l++;
        }
        if(sum>=k){
            ans=min(ans,r-l+1);
        }
        r++;
        
        
    }
    if(ans>n){
        cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    return 0;
}