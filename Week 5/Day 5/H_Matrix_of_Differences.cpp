#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve(){
    int n;
    cin>>n;
    vec a;
    int l=1,r=n*n;
    while(l<=r){
        a.push_back(r);
        r--;
        if(l<=r){
            a.push_back(l);
            l++;
        }
    }
    
    int mat[n][n];
    int index=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                mat[i][j]=a[index];
                index++;
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                mat[i][j]=a[index];
                index++;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

}
int main(){
    fast_io
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}