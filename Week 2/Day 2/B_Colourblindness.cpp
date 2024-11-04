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
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<n;i++){
        if(s1[i]=='B')s1[i]='G';
        if(s2[i]=='B')s2[i]='G';
    }
    if(s1==s2){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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