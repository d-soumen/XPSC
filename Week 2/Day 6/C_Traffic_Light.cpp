#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve(){
    int n;
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    s+=s;
    int ans=0,j=-1;
    for(int i=2*n;i>=0;i--){
        if(s[i]=='g'){
            j=i;
        }
        else if(s[i]==c && j!=-1){
            ans=max(ans,j-i);
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