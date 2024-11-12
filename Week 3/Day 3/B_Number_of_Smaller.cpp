#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    int n,m;
    cin>>n>>m;
    vec a(n);
    vec b(m);
    fl(i,n){
        cin>>a[i];
    }
    fl(i,m){
        cin>>b[i];
    }
    int l=0,r=0,cnt=0;
    vec ans;
    while(r<m){
        if((l<n) && (a[l]<b[r])){
            cnt++;
            l++;
        }
        else{
            ans.push_back(cnt);
            r++;
        }
    }
    for(int val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}