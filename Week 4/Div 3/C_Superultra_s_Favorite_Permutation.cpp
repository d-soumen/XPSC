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
    if(n<5){
        cout<<-1<<endl;
        return;
    }
    else{
        cout<<"1 8";
        for(int i=1;i<=n-2;i++){
            cout<<" "<<i+1;
        }
        cout<<endl;
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