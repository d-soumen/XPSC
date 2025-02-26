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
        vec a(n);
        fl(i,n) cin>>a[i];

        int br=0,bl=0,bc=0;
        int l=0;
        while(l<n){
            int cnt1=0,cnt2=0;
            int r=l+1;
            while(r<n){
                if(a[r]>a[l]){
                    cnt1++;
                }
                else if(a[r]<a[l]){
                    cnt2++;
                }
                int d=cnt1-cnt2;
                if(d<bc){
                    bc=d;
                    bl=l;
                    br=r;
                }
                r++;
            }
            l++;
        }
        cout<<bl+1<<" "<<br+1<<endl;
    }
    return 0;
}