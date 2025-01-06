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
        int n;
        cin>>n;
        vec a(n);
        fl(i,n) cin>>a[i];
        ll sum=0,cnt=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(a[i]==1) cnt++;
        }
        if(sum>=cnt+n && n>1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}