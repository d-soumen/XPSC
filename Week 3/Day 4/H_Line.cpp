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
    string s;
    cin>>s;
    vl dis;
    ll total=0;
    ll change=0;
    fl(i,n){
        ll L=i;
        ll R=n-i-1;
        if(s[i]=='L'){
            if(R>L){
                change++;
                total+=R;
                dis.push_back(R-L);
            }
            else{
                total+=L;
            }
        }
        else{
            if(L>R){
                change++;
                total+=L;
                dis.push_back(L-R);
            }
            else{
                total+=R;
            }
        }
    }
    vl ans(n+1);
    for(int i=change;i<=n;i++){
        ans[i]=total;
    }
    sort(dis.begin(),dis.end(),greater<int>());
    for(int i=change-1;i>=1;i--){
        total-=dis.back();
        dis.pop_back();
        ans[i]=total;
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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