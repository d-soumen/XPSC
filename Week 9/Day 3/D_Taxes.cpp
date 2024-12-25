#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
bool isprime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    fast_io
    int n;
    cin>>n;
    if(isprime(n)){
        cout<<1<<endl;
    }
    else if(n%2==0){
        cout<<2<<endl;
    }
    else if(isprime(n-2)){
        cout<<2<<endl;
    }
    else{
        cout<<3<<endl;
    }
    return 0;
}