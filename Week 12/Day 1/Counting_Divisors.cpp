#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
const int N=1e6+9;
vector<int>divisors(N);
int main(){
    fast_io
    for(int i=1;i<N;i++){
        for(int j=i;j<N;j+=i){
            divisors[j]++;
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<divisors[n]<<endl;
    }
    return 0;
}