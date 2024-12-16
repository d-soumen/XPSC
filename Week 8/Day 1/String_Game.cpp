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
    string s;
    cin>>s;
    if(n<=1){
        cout<<"Ramos\n";
        return;
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            cnt++;

        }
    }
    int c=n-cnt;
    if(min(cnt,c)%2!=0){
        cout<<"Zlatan\n";
    }
    else cout<<"Ramos\n";
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