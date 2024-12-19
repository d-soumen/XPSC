#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    int n;
    cin>>n;
    string ans="";
    for(int i=0;i<n;i++){
        if(i&2){
            ans+='b';
        }
        else{
            ans+='a';
        }
    }
    cout<<ans;
    return 0;
}