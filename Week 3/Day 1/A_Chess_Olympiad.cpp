#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    int x,y,z;
    cin>>x>>y>>z;
    double my_team=x+0.5*y;
    double op_team=z+0.5*y;
    int rem=4-(x+y+z);
    if(my_team+rem > op_team){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}