#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vec a(n);
        ll sum=0;
        fl(i,n){
            cin>>a[i];
            sum+=a[i];
        }
        ll ans=sum-2*a[n-2];
        cout<<ans<<endl;

    }
    return 0;
}