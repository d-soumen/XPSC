#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    int s,t;
    cin>>s>>t;
    int cnt=0;
    for(int i=0;i<=s;i++){
        for(int j=0;j<=s-i;j++){
            for(int k=0;k<=s-i-j;k++){
                if((i+j+k<=s)&&(i*j*k <=t)){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}