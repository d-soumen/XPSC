#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    string s,t;
    cin>>s>>t;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=t[i]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}