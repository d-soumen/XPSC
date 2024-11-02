#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve(){
    string s;
    cin>>s;
    int low=0,up=0;
    deque<char>dq;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='B'){
            up++;
            continue;
        }
        if(s[i]=='b'){
            low++;
            continue;
        }
        if(low>0 && islower(s[i])){
            low--;
            continue;
        }
        if(up>0 && isupper(s[i])){
            up--;
            continue;
        }
        dq.push_front(s[i]);
    }
    for(char ch:dq){
        cout<<ch;
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