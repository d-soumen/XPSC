#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    string t,p;
    cin>>t>>p;
    int n=t.size(),m=p.size();
    vec a(n);
    fl(i,n){
        cin>>a[i];
        a[i]--;
    }
    auto ok=[&](int del){
        vector<bool> bad(n);
        for(int i=0;i<=del;i++){
            bad[a[i]]=true;
        }
        int j=0;
        for(int i=0;i<n;i++){
            if(!bad[i] && t[i]==p[j]){
                j++;
            }
            if(j==m){
                return true;
            }
        }
        return false;
    };
    int l=0,r=n-1,mid,ans=0;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans+1<<endl;
    return 0;
}