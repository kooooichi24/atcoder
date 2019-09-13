#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int n, m;
  cin >> n >> m;
  
  // 0:未入力, 1:友達もしくは自分自身, 2:友達の友達
  vector<vector<int>> friendRT(n, vector<int>(n, 0));
  int a, b;
  rep(i,m) {
    cin >> a >> b;
    a--, b--;
    friendRT[a][a] = 1;
    friendRT[a][b] = 1;
    friendRT[b][a] = 1;
  }
  
  rep(i,n) {
    rep(j,n) {
      if (i == j) continue;
      if (friendRT[i][j] == 1) {
        rep(k,n) {
          if (k == j) continue;
          if (k == i) continue;
          // jが行。kが列。
          if (friendRT[j][k] == 1) {
            if (friendRT[i][k] == 0) {
              friendRT[i][k] = 2;
            }
          }
        }
      }
    }
  }
  rep(i,n) {
    cout << count(friendRT[i].begin(), friendRT[i].end(), 2) << endl;
  }
  return 0;
}