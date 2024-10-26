#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    int serja=0,dima=0;
    int s=0,e=n-1;
    int x=0;
    while(s<=e){
        if(x%2==0){
            if(a[s] > a[e]){
                serja+=a[s];
                s++;
            }
            else{
                serja+=a[e];
                e--;
            }
        }
        else{
            if(a[s]>a[e]){
                dima+=a[s];
                s++;
            }
            else{
                dima+=a[e];
                e--;
            }
        }
        x++;
    }
    cout<<serja<<" "<<dima<<endl;
    return 0;
}