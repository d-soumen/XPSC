#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    ll n,s;
    cin>>n>>s;
    ll sum=0;
    vec v(n);
    fl(i,n){
        cin>>v[i];
    }
    ll l=0,r=0,ans=0;
    while(r<n){
        sum+=v[r];
        if(sum<=s){
            ans=max(ans,r-l+1);

        }
        else{
            sum-=v[l];
            l++;
        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}