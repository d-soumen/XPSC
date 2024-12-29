#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    string s;
    cin>>s;
    int n=s.size();
    map<char,int>cnt;
    for(int i=0;i<n;i++){
        cnt[s[i]]++;
    }
    int oddcnt=0;
    for(auto [x,y]:cnt){
        if(y%2!=0){
            oddcnt++;
        }
    }
    if(oddcnt>1){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    string first,middle,last;
    for(auto [x,y] : cnt){
        if(y%2!=0){
            for(int i=1;i<=y;i++){
                middle.push_back(x);
            }
        }
        else{
            for(int i=1;i<=(y/2);i++){
                first.push_back(x);
                last.push_back(x);
            }
        }
    }
    reverse(last.begin(),last.end());
    string ans=first+middle+last;
    cout<<ans<<endl;    
    return 0;
}
