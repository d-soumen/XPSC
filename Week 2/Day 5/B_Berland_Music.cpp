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
    fl(i,n){
        cin>>v[i];
    }
    string s; cin>>s;
    vector<pair<int,int>>l,d;
    fl(i,n){
        if(s[i]=='1'){
            l.push_back(make_pair(v[i],i));
        }
        else{
            d.push_back(make_pair(v[i],i));
        }
    }
    sort(d.begin(),d.end());
    sort(l.begin(),l.end());
    vec r(n);
    int rating=1;
    for(auto& song:d){
        r[song.second]=rating++;
    }
    for(auto& song:l){
        r[song.second]=rating++;
    }
    fl(i,n){
        cout<<r[i]<<" ";
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