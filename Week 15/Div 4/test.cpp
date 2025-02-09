#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    vec a(n);
    fl(i,n) cin>>a[i];
    vec b(m);
    fl(i,m) cin>>b[i];
    bool ok=true;
    for(int i=0;i<n;i++){
        int c=b[0]-a[i];
        if(i==0){
            a[i]=min(a[i],c);
        }
        else{
            if(a[i]>=a[i-1] && c>=a[i-1]){
                a[i]=min(a[i],c);
            }
            else if(c >= a[i-1]){
                a[i]=c;
            }
            else if(a[i]>=a[i-1]){
                a[i]=a[i];
            }
            else{
                ok=false;
                break;
            }
        }
    }
    if(ok){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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