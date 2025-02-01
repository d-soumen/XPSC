#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
const int N=200005;
int main(){
    fast_io
    int n,k,q;
    cin>>n>>k>>q;
    vector<int>f(N);
    while(n--){
        int l,r;
        cin>>l>>r;
        f[l]++;
        f[r+1]--;
    }
    int cnt=0;
    for(int i=0;i<f.size();i++){
        cnt+=f[i];
        if(cnt>=k) f[i]=1;
        else f[i]=0;
    }
    vector<int>p(N);
    for(int i=1;i<p.size();i++){
        p[i]=f[i-1]+p[i-1];
    }
    while(q--){
        int a,b;
        cin>>a>>b;
        cout<<p[b+1]-p[a]<<endl;
    }
    return 0;
}