#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
const int MAX_N = 200005;

vector<int> par(MAX_N, -1);
vector<int> group_size(MAX_N, 1);

int dsu_find(int node) {
    if (par[node] == -1)
        return node;
    return par[node] = dsu_find(par[node]);
}
void dsu_union_by_size(int node1, int node2) {
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    if (leaderA != leaderB) {
        if (group_size[leaderA] > group_size[leaderB]) {
            par[leaderB] = leaderA;
            group_size[leaderA] += group_size[leaderB];
        } else {
            par[leaderA] = leaderB;
            group_size[leaderB] += group_size[leaderA];
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for (int f = 2; f <= 1000000; ++f) {
        vector<int> ind;
        for (int i = 1; i <= n; ++i) {
            if (a[i] % f == 0) {
                ind.push_back(i);
            }
        }
        for (int i = 1; i < ind.size(); ++i) {
            dsu_union_by_size(ind[i - 1], ind[i]);
        }
    }
    vector<int> dp(n + 1, 0);
    dp[1] = 1;
    for (int i = 1; i < n; ++i) {
        if (dp[i] > 0) {
            for (int j = i + 1; j <= n; ++j) {
                if (dsu_find(i) == dsu_find(j) && __gcd(a[i], a[j]) != 1) {
                    dp[j] = (dp[j] + dp[i]) % MOD;
                }
            }
        }
    }

    cout << dp[n] << endl;
    return 0;
}
