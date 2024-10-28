#include<bits/stdc++.h> 
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    int mx=max(a,b);
    int mn=min(a,b);
    int ans=0;
    ans+=mx;
    if(mx-1 > mn){
        ans+=mx-1;
    }
    else{
        ans+=mn;
    }
    cout<<ans<<endl;
    return 0;
}