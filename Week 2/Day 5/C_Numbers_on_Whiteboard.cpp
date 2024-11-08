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
    multiset<int>s;
    for(int i=1;i<=n;i++){
        s.insert(i);
    }
    vector<pair<int,int>> ans;
    for(int i=0;i<n-1;i++){
        auto it=s.end();
        it--;
        int a=*it;
        s.erase(it);
        it=s.end();
        it--;
        int b=*it;
        s.erase(it);
        s.insert((a+b+1)/2);
        ans.push_back(make_pair(a,b));
    }
    cout<<*s.begin()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
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