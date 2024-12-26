#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
const int MOD=1e9+7;
int power(int x,int n){
    int ans=1%MOD;
    while(n){
        if(n&1){
            ans=(1LL*ans %MOD * x %MOD)%MOD;
        }
        x=1LL*x*x %MOD;
        n>>=1;
    }
    return ans;
}
int main(){
    fast_io
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<power(a,b)<<endl;
    }
    return 0;
}