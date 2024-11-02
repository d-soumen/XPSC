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
    map<string,bool>mp;
    deque<string>dq;
    while(t--){
        string s;
        cin>>s;
        if(mp[s]){
            dq.erase(find(dq.begin(),dq.end(),s));
        }
        else{
            mp[s]=true;
        }
        dq.push_front(s);
    }
    for(string ch:dq){
        cout<<ch<<endl;
    }
    return 0;
}