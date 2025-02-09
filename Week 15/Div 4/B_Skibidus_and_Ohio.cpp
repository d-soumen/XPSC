#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve(){
    string s;
    cin>>s;
    bool ok=true;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            ok=false;
            break;
        }
    }
    if(ok){
        cout<<s.size()<<endl;
    }
    else{
        cout<<1<<endl;
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