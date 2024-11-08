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
    int a[n];
    fl(i,n){
        cin>>a[i];
    }
    int l=0,r=n-1;
    int mn=1,mx=n;
    while(l<=r){
        if(a[l]==mn){
            l++;
            mn++;
        }
        else if(a[l]==mx){
            l++;
            mx--;
        }
        else if(a[r]==mn){
            r--;
            mn++;
        }
        else if(a[r]==mx){
            r--;
            mx--;
        }
        else{
            break;
        }
    }
    if(l<=r){
        cout<<l+1<<" "<<r+1<<endl;
    }
    else{
        cout<<-1<<endl;
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