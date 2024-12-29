#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    ll n,x;
    cin>>n>>x;
    vl v(n);
    fl(i,n) cin>>v[i];
    ll l=0,r=0,cnt=0,sum=0;
    while(r<n){
        sum+=v[r];
        while(sum>x){
            sum-=v[l];
            l++;
        }
        if(sum==x){
            cnt++;
        }
        r++;
    }
    cout<<cnt<<endl;
    return 0;
}