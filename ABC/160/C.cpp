#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using p = pair<int, int>;

int main() {
  int k, n;
  cin >> k >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];

  int ma = 0;
  rep(i,n) {
    if (i != n-1) {
      ma = max(ma, abs(a[i] - a[i+1]));
    } else {
      ma = max(ma, abs(k-a[i] + a[0]));
    }
  }

  int total_d = 0;
  rep(i,n) {
    if (i != n-1) {
      total_d += a[i+1] - a[i];
    } else {
      total_d += k-a[i] + a[0];
    }
  }
  cout << total_d-ma << endl;

  return 0;
}