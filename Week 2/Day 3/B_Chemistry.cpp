#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int frq[26]={0};
    for(int i=0;i<n;i++){
        frq[s[i]-'a']++;
    }
    int odd=0;
    for(int i=0;i<26;i++){
        if(frq[i]%2!=0){
            odd++;
        }
    }
    if(odd<=k+1){
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