#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve(){
    int n,s;
    cin>>n>>s;
    vec a(n);
    fl(i,n) {
        cin>>a[i];
    }
    int l=0,r=0,ans=0,sum=0;
    while(r<n){
        sum+=a[r];
        while(sum > s){
            sum-=a[l];
            l++;
        }
        if(sum==s){
            ans=max(ans,r-l+1);
        }
        r++;

    }
    if(ans==0) cout<<-1<<endl;
    else cout<<n-ans<<endl;
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