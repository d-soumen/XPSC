
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
        fl(i,n) cin>>a[i];
        int ans=INT_MAX;
        
        for(int i=0;i<n;i++){
            int cur=0;
            if(i>0){
                cur=max(cur,abs(a[i]-a[i-1]));
            }
            if(i+1<n){
                cur=max(cur,abs(a[i]-a[i+1]));
            }
            ans=min(ans,cur);
        }
        cout<<ans<<endl;
        
    }
    return 0;
}