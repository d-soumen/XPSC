#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve(){
    int n;
    cin>>n;
    vec a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    bool ok=false;
    for(int i=2;i<=n;i++){
        if(a[1]!=a[i]){
            ok=true;
            break;
        }
    }
    if(ok){
        int dis=-1;
        cout<<"YES\n";
        for(int i=2;i<=n;i++){
            if(a[1]!=a[i]){
                cout<<1<<" "<<i<<endl;
                dis=i;
            }
        }
        for(int i=2;i<=n;i++){
            if(a[i]==a[1]){
                cout<<dis<<" "<<i<<endl;
            }
        }

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