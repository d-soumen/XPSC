#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    ll n,k;
    cin>>n>>k;
    vl a;
    for(ll i=1;i<=sqrt(n);i++){
        if(n%i==0){
            a.push_back(i);
            if(n/i!=i){
                a.push_back(n/i);
            }
        }
    }
    sort(a.begin(),a.end());
    if(a.size()< k){
        cout<<-1<<endl;
    }
    else{
        cout<<a[k-1]<<endl;
    }
    return 0;
}