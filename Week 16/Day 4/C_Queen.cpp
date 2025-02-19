#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 200005;
int p[MAX_N], c[MAX_N];
vector<int> tree[MAX_N]; 
vector<int> dels;        
int vis[MAX_N];          
int n;               
int dfs(int u) {
    vis[u] = 1;
    int maxi = c[u]; 

    for (int child : tree[u]) {
        if (!vis[child]) {
            maxi = min(maxi, dfs(child)); 
        }
    }
    vis[u] = 2; 
    if (maxi == 1) {
        dels.push_back(u);
    }

    return c[u]; 
}
int main() {
    int root = -1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int parent, value;
        cin >> parent >> value; 

        c[i] = value; 

        if (parent == -1) {
            root = i; 
        } else {
            tree[parent].push_back(i); 
        }
    }
    memset(vis,0,sizeof(vis));
    dfs(root); 

    sort(dels.begin(), dels.end()); 

    if (dels.empty()) {
        cout << "-1" << endl; 
    } else {
        cout << dels[0];
        for (size_t i = 1; i < dels.size(); i++) {
            cout << " " << dels[i];
        }
        cout << endl;
    }

    return 0;
}