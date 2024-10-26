#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<0<<endl;
        return 0;
    }
    int cnt=0;
    for(int i=a;i<=b;i++){
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}