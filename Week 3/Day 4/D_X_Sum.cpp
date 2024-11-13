#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 205;
int board[MAX_N][MAX_N];
bool visited[MAX_N][MAX_N];
int n, m;
int di[4] = {-1, -1, 1, 1};
int dj[4] = {-1, 1, -1, 1};

bool isValid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}
int dfs(int si, int sj) {
    int sum = board[si][sj];
    visited[si][sj] = true;
    for (int k = 0; k < 4; k++) {
        int ci = si + di[k];
        int cj = sj + dj[k];
        while(isValid(ci,cj) && !visited[ci][cj]){
            visited[ci][cj]=true;
            sum+=board[ci][cj];
            ci+=di[k];
            cj+=dj[k];
        }
        
    }

    return sum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> board[i][j];
            }
        }

        int maxSum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                memset(visited, false, sizeof(visited));
                maxSum = max(maxSum, dfs(i, j));
            }
        }
        cout << maxSum << endl;
    }
    return 0;
}
