#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int cnta=0,cntb=0;
    cnta=abs(a-1);
    cntb=abs(b-c)+abs(c-1);
    if(cnta==cntb){
        cout<<"3\n";
    }
    else if(cnta>cntb){
        cout<<"2\n";
    }
    else{
        cout<<"1\n";
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