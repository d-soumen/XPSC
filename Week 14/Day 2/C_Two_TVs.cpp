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
    map<int,int>mp;
    while(n--){
        int l,r;
        cin>>l>>r;
        l--,r--;
        mp[l]++;
        mp[r+1]--;
    }
    ll sum=0;
    bool ok=true;
    for(auto [x,y]:mp){
        sum+=y;
        if(sum>2){
            ok=false;
            break;
        }
    }
    if(ok)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}