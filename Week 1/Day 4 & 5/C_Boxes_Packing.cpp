#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main(){
    fast_io
    int n;
    cin>>n;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<int,int>mp;
    for(int box:v){
        mp[box]++;
    }
    int ans=0;
    for(auto[x,y]:mp){
        ans=max(ans,y);
    }
    cout<<ans<<endl;
    return 0;
}