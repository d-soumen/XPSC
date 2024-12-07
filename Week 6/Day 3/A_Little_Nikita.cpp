#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n>=m && n%2==m%2)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}