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
    vec v(n);
    fl(i,n) cin>>v[i];
    int cnt=0;
    fl(i,n){
        if(v[i]%2!=0) cnt++;
    }
    if(cnt==0 || cnt==n){
        cout<<0<<endl;
        return;
    }
    vec v1,v2;
    for(auto it:v){
        if(it%2!=0){
            v1.push_back(it);
        }
        else{
            v2.push_back(it);
        }
    }
      
    sort(v1.begin(),v1.end());    
    sort(v2.begin(),v2.end());
    ll tmp=v1.back();
    int ans1=0;
    for(auto it :v2){
        if(tmp<it){
            ans1+=2;
            tmp=(it*2)+tmp;
        }
        else{
            ans1++;
            tmp=it+tmp;
        }
    }
    int ans2=0;
    reverse(v2.begin(),v2.end());
    tmp=v1.back();
    for(auto it:v2){
        if(tmp<it){
            ans2+=2;
            tmp=(it*2)+tmp;
        }
        else{
            ans2++;
            tmp=it+tmp;
        }
    }
    cout<<min(ans1,ans2)<<endl;
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