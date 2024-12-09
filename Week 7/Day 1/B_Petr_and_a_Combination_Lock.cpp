#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    int n;
    cin>>n;
    vec a(n);
    fl(i,n) cin>>a[i];
    bool flag=false;
    for(int i=0;i<(1<<n);i++){
        int sum=0;
        for(int k=0;k<n;k++){
            if((i>>k)&1){
                sum+=a[k];
            }
            else{
                sum-=a[k];
            }
        }
        if(sum%360==0){
            flag=true;
            break;
        }
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}