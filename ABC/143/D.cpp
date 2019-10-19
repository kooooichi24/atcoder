#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> L(n);
  rep(i,n) cin >> L[i];

  sort(L.begin(), L.end());
  int ans = 0;
  for (int b = 0; b < n; b++) {
    for (int a = 0; a < b; a++) {
      int ab = L[a] + L[b];
      int r = lower_bound(L.begin(), L.end(), ab) - L.begin();
      int l = b+1;
      // c = [l,r)
      ans += r-l;
    }
  }
  cout << ans << endl;
  return 0;
}
