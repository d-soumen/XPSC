#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    ll l,r;
    cin>>l>>r;
    cout<<"YES\n";
    while(l<r){
        cout<<l<<" "<<l+1<<endl;
        l+=2;
    }
    return 0;
}