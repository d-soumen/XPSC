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
    int x;
    map<string,int>mp;
    while(t--){
        string s;
        cin>>s;
        mp[s]++;
        x=mp[s];
        if(x==1){
            cout<<"OK\n";
        }
        else{
            cout<<s<<x-1<<endl;
        }
    }
    return 0;
}