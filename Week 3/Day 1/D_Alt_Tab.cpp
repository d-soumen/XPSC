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
    stack<string>st;
    if(n==1){
        string s;
        cin>>s;
        cout<<s[s.size()-2]<<s[s.size()-1]<<endl;
    }
    else{
        while(n--){
            string s;
            cin>>s;
            st.push(s);

        }
        set<string>ans;
        while(!st.empty()){
            if(ans.find(st.top())==ans.end()){
                cout<<st.top()[(st.top()).size()-2]<<st.top()[(st.top()).size()-1];
            }
            ans.insert(st.top());
            st.pop();
        }
        
    }
    return 0;
}