#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> p;
        p.push_back(a);
        
        for (int j = n; j >= 1; --j) {
            if (j != a && j != b) {
                p.push_back(j);
            }
        }
        
        p.push_back(b);
        
        bool isValid = true;
        if (p.size() == n) {
            int minFirstHalf = *min_element(p.begin(), p.begin() + n / 2);
            int maxSecondHalf = *max_element(p.begin() + n / 2, p.end());
            if (minFirstHalf != a || maxSecondHalf != b) {
                isValid = false;
            }
        } else {
            isValid = false;
        }
        
        if (isValid) {
            for (int x : p) {
                cout << x << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
