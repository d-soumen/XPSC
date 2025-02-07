#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace __gnu_pbds;
using namespace std;
template<typename T> using pbds= tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    fl(i,n) cin>>a[i];
    pbds<int>p;
    ll inv=0;
    for(int i=n-1;i>=0;i--){
        inv+=p.order_of_key(a[i]);
        p.insert(a[i]);
    }
    cout<<inv<<endl;
}
int main(){
    fast_io
    int t;
    cin>>t;
    string bl;
    while(t--){
        solve();
        getline(cin,bl);
    }
    return 0;
}