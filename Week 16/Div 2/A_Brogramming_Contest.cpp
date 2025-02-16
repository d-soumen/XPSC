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
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            cnt++;
        }
    }
    bool ok=true;
    for(int i=0;i<n;i++){
        if(s[i]!='1'){
            ok=false;
            break;
        }
    }
    
    if(ok){
        cout<<1<<endl;
    }
    else if(s[0]=='1'){
        cout<<n<<endl;
    }
    else{

        cout<<cnt<<endl;
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