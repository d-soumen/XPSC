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
template<typename T> using pbds= tree<T,null_type,less_equal<T>,rb_tree_tag,
tree_order_statistics_node_update>;

int main(){
    fast_io
    int n,m;
    cin>>n>>m;
    pbds<int>pd;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        pd.insert(x);
    }
    for(int i=1;i<=m;i++){
        int x;
        cin>>x;
        cout<<pd.order_of_key(x+1)<<" ";
    }
    cout<<endl;
    return 0;
}