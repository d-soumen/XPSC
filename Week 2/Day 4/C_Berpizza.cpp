#include<bits/stdc++.h>
#define ll long long int
#define vec vector<int>
#define vl vector<ll>
#define fl(i,n) for(int i=0;i<n;i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main(){
    fast_io
    int n, customerNo = 1;
    cin >> n;
    set<pair<int, int>> s;
    multiset<pair<int, int>> ml;
    vector<int> ans;
    for(int i = 1;i <= n;i++){
      int type;
      cin >> type;
      if (type == 1) {
         int money;
         cin >> money;
         s.insert({ customerNo,money });
         ml.insert({ money,-customerNo });
         customerNo++;
      }
      else if (type == 2) {
         int pos = s.begin()->first, money = s.begin()->second;
         ans.push_back(pos);
         s.erase(s.begin());
         ml.erase({ money,-pos });
      }
      else {
         int pos = -ml.rbegin()->second, money = ml.rbegin()->first;
         ans.push_back(pos);
         ml.erase(--ml.end());
         s.erase({ pos,money });
      }
   }

   for (auto value : ans) {
      cout << value << " ";
   }
   cout <<endl;

    return 0;
}