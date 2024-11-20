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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt0=0,cnt1=0;
        if(s[0]=='0')cnt0++;
        else cnt1++;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]){
                if(s[i]=='1')cnt1++;
                else cnt0++;
            }
        }
        cout<<min(cnt0,cnt1)<<endl;
    }
    return 0;
}