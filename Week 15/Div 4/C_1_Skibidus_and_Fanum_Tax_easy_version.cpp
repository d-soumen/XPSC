#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canSort(int n, vector<int>& a, int b) {
    for (int i = 0; i < n; ++i) {
        int flipped = b - a[i];
        if (i == 0) {
            a[i] = min(a[i], flipped);
        } else {
            if (a[i] >= a[i-1] && flipped >= a[i-1]){
                a[i] = min(a[i], flipped);
            } else if (flipped >= a[i-1]) {
                a[i] = flipped;
            }
            else if (a[i] >= a[i-1]){
              
            } else {
                return false;
            }
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        vector<int> b(m);
        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }
        if (canSort(n, a, b[0])) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}