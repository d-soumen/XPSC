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
        string a,b;
        cin>>a>>b;
        if(a.back()==b.back()){
            if(a.size()==b.size()){
                cout<<'='<<endl;
            }
            else if(a.back()=='S'){
                if(a.size()<b.size()){
                    cout<<'>'<<endl;
                }
                else{
                    cout<<'<'<<endl;
                }
            }
            else{
                if(a.size()>b.size()){
                    cout<<'>'<<endl;
                }
                else{
                    cout<<'<'<<endl;
                }
            }
        }
        else{
            if(a.back()<b.back()){
                cout<<'>'<<endl;
            }
            else{
                cout<<'<'<<endl;
            }
        }
    }
    return 0;
}