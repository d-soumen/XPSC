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
    while(k--){
        int x,l=0,r=n-1;
        cin>>x;
        bool found=false;
        while(l<=r){
            int mid=(l+r)/2;
            if(x==a[mid]){
                found=true;
                break;
            }
            else if(x<a[mid]){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        
        }
        if(found) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}