#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int n, m, X, Y;
  cin >> n >> m >> X >> Y;
  vector<int> x(n), y(m);
  rep(i,n) cin >> x[i];
  rep(i,m) cin >> y[i];

  sort(x.begin(), x.end());
  sort(y.begin(), y.end());
  string ans = "War";
  int yMin = y[0], xMax = x.back();
  for (int i = X+1; i <= Y; i++) {
    if (xMax<i && i<=yMin) {
      ans = "No War";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}