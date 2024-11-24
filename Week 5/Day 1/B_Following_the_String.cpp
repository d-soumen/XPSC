#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve(){
    string s="abcdefghijklmnopqrstuvwxyz";
    map<char,int>cnt;
    for(char ch:s){
        cnt[ch]=0;
    }
    int n;
    cin>>n;
    vec v(n);
    fl(i,n){
        cin>>v[i];
        for(auto [x,y]:cnt){
            if(y==v[i]){
                cout<<x;
                cnt[x]++;
                break;
            }

        }
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