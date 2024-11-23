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
    string s;
    cin>>s;
    int l=0,r=n-1,ans=0;
    while(r>l){
        while(l<n && s[l]!='L'){
            l++;
        }
        while(r>=0 && s[r]!='R'){
            r--;
        }
        if(l<r){
            while(l<r){
                ans+=a[l];
                s[l]='.';
                l++;
            }
            l++;
            r--;
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