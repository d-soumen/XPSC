#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    string s1,s2;
    cin>>s1>>s2;
    int pos1=0,pos2=0,unc=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]=='+'){
            pos1++;
        }
        if(s2[i]=='+'){
            pos2++;
        }
        if(s2[i]=='?'){
            unc++;
        }

    }
    int cnt=0;
    for(int i=0;i<(1<<unc);i++){
        // cout<<__builtin_popcount(i)<<" "<<pos2<<" "<<pos1<<"\n";
        if(__builtin_popcount(i)+pos2==pos1){
            cnt++;
        }
    }
    cout<<fixed<<setprecision(12)<<(double)cnt/(1<<unc)<<endl;
    return 0;
}