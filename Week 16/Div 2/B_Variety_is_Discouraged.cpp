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
    
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    set<int>un;
    for(auto & [x,y]:mp){
        if(y==0){
            un.insert(x);
        }
    }
    int mx=0,bl=-1,br=-1;
    for(int l=0,r=0;r<n;r++){
        if(un.count(a[r])==0){
            l=r+1;
        }
        else{
            if(r-l+1>mx){
                mx=r-l+1;
                bl=l;
                br=r;
            }

        }
    }
    int org=n-mp.size();
    if(mx==0){
        cout<<0<<endl;
    }
    else{
        cout<<bl+1<<" "<<br+1<<endl;
    }
    
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