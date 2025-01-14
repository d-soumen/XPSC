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
        ll n;
        cin>>n;
        vec a(n);
        fl(i,n) cin>>a[i];
        ll ones=count(a.begin(),a.end(),1);
        ll zeros=count(a.begin(),a.end(),0);

        if(ones==0){
            cout<<0<<endl;
        }
        else{
            cout<<ones*(1ll<<zeros)<<endl;
        }
    }
    return 0;
}