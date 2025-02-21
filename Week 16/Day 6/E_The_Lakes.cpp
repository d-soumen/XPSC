#include<bits/stdc++.h>
using namespace std;
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int n,m;
int graph[1000][1000];
bool vis[1000][1000];
bool valid(int x,int y){
    return (x>=0 && x<n && y>=0 && y<m && graph[x][y]>0);
}
int dfs(int si,int sj){
    vis[si][sj]=true;
    int vol=graph[si][sj];
    for(int i=0;i<4;i++){
        int ci=si+dx[i];
        int cj=sj+dy[i];
        if(valid(ci,cj) && vis[ci][cj]==false){
            vis[ci][cj]=true;
            vol+=dfs(ci,cj);
        }
    }
    return vol;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>graph[i][j];
                vis[i][j]=false;
            }
        }
        int max_vol=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(graph[i][j]>0 && !vis[i][j]){
                    int cur_vol=dfs(i,j);
                    max_vol=max(max_vol,cur_vol);
                }
            }
        }
        cout<<max_vol<<endl;
    }
    return 0;
}