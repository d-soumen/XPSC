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
    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    vector<int>cnt(n+1);
    set<int>s;
    for(int i=n;i>=1;i--){
        s.insert(a[i]);
        cnt[i]=s.size();
    }
    for(int i=1;i<=m;i++){
        int pos;
        cin>>pos;
        cout<<cnt[pos]<<endl;
    }

    return 0;
}