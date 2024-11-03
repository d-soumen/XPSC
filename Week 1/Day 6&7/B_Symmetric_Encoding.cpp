#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve(){
    int n;
    string b;
    cin>>n>>b;
    vec cnt(26,0);
    for(char ch:b){
        cnt[ch-'a']=1;
    }
    string r="";
    for(int i=0;i<26;i++){
        if(cnt[i]>0){
            r+=char('a'+i);
        }
    }
    string a="";
    for(char ch:b){
        int i=r.find(ch);
        a+=r[r.size()-1-i];
    }
    cout<<a<<endl;
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