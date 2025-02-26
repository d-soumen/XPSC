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
        if(n<3){
            cout<<0<<endl;
        }
        else{
            ll x=0,y=0;
            for(int i=0;i<n;i++){
                if(s[i]=='-'){
                    x++;
                }  
                else{
                    y++;
                }
            }
            if(x<2){
                cout<<0<<endl;
            }
            else{
                cout<<(x*x/4)*y<<endl;
            }
        }
    }
    return 0;
}