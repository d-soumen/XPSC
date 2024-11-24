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
    if(n%2!=0){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES\n";
    for(int i=0;i<n/2;i++){
        if(i%2!=0){
            cout<<"AA";
        }
        else{
            cout<<"BB";
        }
    }
    cout<<endl;
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