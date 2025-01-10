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
    vec a(n);
    fl(i,n) cin>>a[i];
    sort(a.begin(),a.end());
    auto ok=[&](int time){
        int cnt=1,l=0;
        for(int r=0;r<n;r++){
            if((a[r]-a[l])>2*time){
                l=r;
                cnt++;
            }
        }
        return cnt<=3;
    };
    int l=0,r=1e9,mid,ans;
    while(l<=r){
        mid=(l+r)/2;
        if(ok(mid)){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
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