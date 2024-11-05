#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    int n;
    cin>>n;
    multiset<int>ml;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ml.insert(x);
    }
    int ans=0,prob=1;
    while(!ml.empty()){
        auto it=ml.lower_bound(prob);
        if(it!=ml.end()){
            ans++;
            ml.erase(it);
        }
        else{
            break;
        }
        prob++;
    }
    cout<<ans<<endl;
    return 0;
}