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
    ll sum=0;
    priority_queue<ll>odd;
    priority_queue<ll>p;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        p.push(x);
        if(x%2==1){
            odd.push(x);
        }
    }
    while(!p.empty()){
        sum+=p.top();
        p.pop();
    }
    ll mnOdd;
    while(!odd.empty()){
        mnOdd=odd.top();
        odd.pop();
    }
    if(sum%2==0){
        cout<<sum<<endl;
    }
    else{
        cout<<sum-mnOdd<<endl;
    }

    return 0;
}