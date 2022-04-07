#include <bits/stdc++.h>
using namespace std;

vector<int> query_game(int n, vector<int>& s, int q, vector<vector<int>>& queries) {
  bool reverse = false;
  vector<int> ans;

  for (int i = 0; i < q; ++i) {
    int code = queries[i][0];
    if (code == 1) {
      reverse = !reverse;
    }
    if (code == 2) {
      int ind1 = queries[i][1] - 1;
      int ind2 = queries[i][2] - 1;
      if (reverse) {
        ind1 = n - ind1 - 1;
        ind2 = n - ind2 - 1;
        swap(s[ind1], s[ind2]);
      }
      else {
         swap(s[ind1], s[ind2]);
      }
    }
    if (code == 3) {
      int ind = queries[i][1] - 1;
      if (reverse) {
        ind = n - ind - 1;
      }
      ans.push_back(s[ind]);
    }
  }

  return ans;
}

int msin() {
  int T;
  cin >> T;

  while (T--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x: a) cin >> x;
    int q;
    cin >> q;
    vector<vector<int>> queries(q, vector<int>(3));
    for (int i = 0; i < q; ++i) {
      cin >> queries[i][0] >> queries[i][1] >> queries[i][2];
    }

    vector<int> ans = query_game(n, a, q, queries);
    for (int x : ans) cout << x << " ";
    cout << endl;
  }

  return 0;
}