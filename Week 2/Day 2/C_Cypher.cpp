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
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        string s;
        cin>>s;
        for(int j=0;j<b;j++){
            if(s[j]=='U'){
                v[i]--;
            }
            else if(s[j]=='D'){
                v[i]++;
            }
            if(v[i]>9)v[i]-=10;
            if(v[i]<0)v[i]+=10;
        }
    }
    for(int val:v){
        cout<<val<<" ";
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