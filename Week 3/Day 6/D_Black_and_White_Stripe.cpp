#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    queue<char>q;
    int l=0,r=0;
    ll ans=INT_MAX,cnt=0;
    while(r<n){
        if(s[r]=='W'){
            q.push(s[r]);
        }
        if( r-l+1==k){
            if(!q.empty()){
                ll sz=q.size();
                ans=min(ans,sz);
                if(q.front()==s[l]){
                    q.pop();
                }
                l++,r++;
            }
            else{
                ans=0;
                break;
            }
        }
        else{
            r++;
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