#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
const int N=3001;
int main(){
    fast_io
    int n;
    cin>>n;
    int ans=0;
    bool b[N]={false};
    int pf[N]={0};
    for(int i=2;i<=n;i++){
        if(!b[i]){
            for(int j=i+i;j<=n;j+=i){
                b[j]=true;
                pf[j]+=1;
            }
        }
        if(pf[i]==2){
            ans+=1;
        }
        
    }
    cout<<ans<<endl;
    return 0;
}