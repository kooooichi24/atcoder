#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using p = pair<int, int>;

int main() {
  int n;
  cin >> n;
  int ma = 0;
  int cnt;
  int ans;
  for (int i = 1; i <= n; i++) {
    int d = i;
    cnt = 0;
    while (d%2 == 0) {
      cnt++;
      d /= 2;
    }

    if (ma <= cnt) {
      ma = cnt;
      ans = i;
    }
  }
  cout << ans << endl;
  return 0;
}