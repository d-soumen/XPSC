#include<bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main(){
    fast_io
    int a,b,t;
    cin>>a>>b>>t;
    if(t+0.5 < a){
        cout<<0<<endl;
        return 0;
    }
    int sum=0;
    int time=a;
    while(time<=t+0.5){
        sum+=b;
        time+=a;
    }
    cout<<sum<<endl;
    return 0;
}