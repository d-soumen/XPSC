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
    int k=-1;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            k=i;
        }
    }
    if(k==-1){
        if(s.back()=='a')
            cout<<(s+'b')<<endl;
        else
            cout<<(s+'a')<<endl;
    }
    else{
        string s1="a";
        if(s[k]=='a')
            s1='b';
            cout<<s.substr(0,k+1)+s1+s.substr(k+1)<<endl;
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