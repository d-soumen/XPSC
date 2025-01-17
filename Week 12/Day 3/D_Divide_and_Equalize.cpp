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
    vec a(n);
    fl(i,n) cin>>a[i];
    map<int, int> cnt;
    for (int i = 0;i < n;i++) {
        for (int j = 2;j * j <= a[i];j++) {
            if (a[i] % j == 0) {
               while (a[i] % j == 0) {
                  cnt[j]++;
                  a[i] /= j;
               }
            }
        }
        if (a[i] > 1) {
            cnt[a[i]]++;
        }
    }
    bool ok=true;
    for(auto [x,y]:cnt){
        if(y%n!=0){
            ok=false;
            break;
        }

    }
    if(ok)cout<<"YES\n";
    else cout<<"NO\n";
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