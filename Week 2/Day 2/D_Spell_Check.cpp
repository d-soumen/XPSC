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
    string T="Timur";
    sort(T.begin(),T.end());
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        if(n!=5){
            cout<<"NO"<<endl;
        }
        else{
            string sorted=s;
            sort(sorted.begin(),sorted.end());
            if(sorted==T){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}