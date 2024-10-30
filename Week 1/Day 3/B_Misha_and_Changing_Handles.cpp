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
    map<string,string>ans,has;
    for(int i=1;i<=t;i++){
        string a,b;
        cin>>a>>b;
        
        if(has.find(a)!=has.end()){
            string s=has[a];
            ans[s]=b;
            has.erase(a);
            has[b]=s;
        }
        else{
            ans[a]=b;
            has[b]=a;
        }
    }
    cout<<ans.size()<<endl;
    for(auto[x,y]:ans){
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}