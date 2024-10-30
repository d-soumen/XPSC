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
    set<pair<string,string>>s;
    while(t--){
        string a,b;
        cin>>a>>b;
        s.insert({a,b});
    }
    cout<<s.size()<<endl;
    return 0;
}