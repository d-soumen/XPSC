#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    int t;
    cin>>t;
    while(t--){
        int n,k,p;
        cin>>n>>k>>p;
        if(abs(k)> n*p){
            cout<<-1<<endl;
        }
        else{
            int mn=(abs(k)+p-1)/p;
            cout<<min(mn,n)<<endl;
        }
    }
    return 0;
}