#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve() {
    int n;
    cin >> n;
    vl v(n);
    ll sum = 0;
    fl(i, n) {
        cin >> v[i];
        sum += abs(v[i]);
    }
    int op = 0;
    bool neg_seq = false;
    fl(i, n) {
        if (v[i] < 0) {
            if (!neg_seq) {
                op++; 
                neg_seq= true;
            }
        } else if (v[i] > 0) {
            neg_seq = false; 
        }
    }
    cout << sum << " " << op<< "\n";
}
int main() {
    fast_io
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
