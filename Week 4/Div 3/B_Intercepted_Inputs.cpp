#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve() {
    int k;
    cin >> k;
    vector<int> v(k);
    int frq[k]={0};
    for (int i = 0; i < k; ++i) {
        cin >> v[i];
        frq[v[i]]++;
    }
    
    int a = k - 2;
    for (int i = 1; i<= a; i++) {
        int m=a/i;
        if (frq[i]!=0&& a % i == 0) {
            frq[i]--;
            if(frq[m]!=0){
                cout<<i<<" "<<m<<endl;
                return;
            }
        }
    }
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
