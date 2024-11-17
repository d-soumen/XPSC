#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    int x,y;
    cin>>x>>y;
    if(x-y>=18){
        cout<<"RCB\n";
    }
    else{
        cout<<"CSK\n";
    }
    return 0;
}