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
    int cnt[26]={0};
    for(int i=0;i<s.size();i++){
        cnt[s[i]-'a']++;
    }
    int flag=-1;
    for(int i=0;i<26;i++){
        if(cnt[i]==0){
            flag=i;
            break;
        }
    }
    if(flag!=-1){
        char miss_char=flag+'a';
        cout<<miss_char<<endl;
    }
    else{
        cout<<"None"<<endl;
    }
    return 0;
}