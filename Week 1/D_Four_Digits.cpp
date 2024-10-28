#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    
    int n;
    cin>>n;
    stack<int>st;
    int x=n;
    

    while(x!=0){
        st.push(x%10);
        x=x/10;
    }
    vec ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    
    for(int i=0;i<4-ans.size();i++)
        cout<<"0";
    for(int val:ans){
        cout<<val;
    }
    return 0;
}