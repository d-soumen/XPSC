#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    int n,q;
    cin>>n>>q;
    vec a(n);
    fl(i,n) cin>>a[i];
    while(q--){
        int x,l=0,r=n-1,ans=n,mid;
        cin>>x;
        while(l<=r){
            mid=(l+r)/2;
            if(x<=a[mid]){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        cout<<ans+1<<endl;
    }
    return 0;
}