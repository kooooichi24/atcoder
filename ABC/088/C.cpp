#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using p = pair<int, int>;

int main() {
  vector<vector<int>> c(3, vector<int>(3));
  rep(i,3) {
    rep(j,3) {
      cin >> c[i][j];
    }
  }

  int a[3], b[3];
  a[0] = 0;
  rep(i,3) {
    b[i] = c[0][i] - a[0];
    a[i] = c[i][0] - b[0];
  }

  string result = "Yes";
  rep(i,3) {
    rep(j,3) {
      if (c[i][j] != a[i]+b[j]) result = "No";
    }
  }

  cout << result << endl;
  return 0;
}