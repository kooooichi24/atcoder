#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using p = pair<int, int>;

int main() {
  int n, k;
  cin >> n >> k;

  if (n%k) cout << 1 << endl;
  else cout << 0 << endl;
  return 0;
}