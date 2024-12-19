#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int mn=INT_MAX;
    for(char ch='a';ch<='z';ch++){
        int l=0,r=n-1;
        
        int cnt=0;
        bool ok=true;
        while(l<=r){
            if(s[l]==s[r]){
                l++;
                r--;
            }
            else if(s[l]==ch){
                cnt++;
                l++;
            }
            else if(s[r]==ch){
                cnt++;
                r--;
            }
            else{
                ok=false;
                break;
            }
        }
        if(ok){
            mn=min(mn,cnt);
        }
    }
    if(mn==INT_MAX){
        cout<<-1<<endl;
    }
    else{
        cout<<mn<<endl;
    }

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