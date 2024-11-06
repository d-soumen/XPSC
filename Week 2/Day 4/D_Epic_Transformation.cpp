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
    map<int,int>mp;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    priority_queue<int>pq;
    for(auto[x,y]:mp){
        pq.push(y);
    }
    while(!pq.empty()){
        if(pq.size()<2){
            break;
        }
        int x,y;
        x=pq.top();
        pq.pop();
        y= pq.top();
        pq.pop();
        x--,y--;
        if(x>=1){
            pq.push(x);
        }
        if(y>=1){
            pq.push(y);
        }
    }
    int ans=0;
    while(!pq.empty()){
        ans+=pq.top();
        pq.pop();
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