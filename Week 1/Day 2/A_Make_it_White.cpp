#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l=0,r=0;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            l=i;
            break;
        }
    }
    for(int i=n;i>=0;i--){
        if(s[i]=='B'){
            r=i;
            break;
        }
    }
    cout<<r-l+1<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}