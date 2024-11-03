#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    int n,x;
    cin>>n>>x;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vec ans;
    for(int i=0;i<n;i++){
        if(v[i]!=x){
            ans.push_back(v[i]);
        }
    }
    for(int val:ans){
        cout<<val<<" ";
    }
    return 0;
}