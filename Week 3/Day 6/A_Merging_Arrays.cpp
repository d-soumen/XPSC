#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    int n,m;
    cin>>n>>m;
    vl a(n);
    vl b(m);
    fl(i,n){
        cin>>a[i];
    }
    fl(i,m){
        cin>>b[i];
    }
    int p=n+m;
    vl c(p);
    int i=0,j=0,k=0;
    while(i<n || j<m){
        if(j==m || i<n && a[i]<b[j]){
            c[k]=a[i];
            i++,k++;
        }
        else{
            c[k]=b[j];
            j++,k++;
        }
    }
    for(int val:c){
        cout<<val<<" ";
    }
    return 0;
}