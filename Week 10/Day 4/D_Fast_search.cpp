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

    sort(a.begin(),a.end());
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        auto itl=lower_bound(a.begin(),a.end(),l);        
        auto itr=upper_bound(a.begin(),a.end(),r);
        cout<<itr-itl<<" ";
    }
    cout<<endl;
    return 0;
}