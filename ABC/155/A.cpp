#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using p = pair<int, int>;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  if ((a == b && a != c) || (a == c && a != b) || (b == c && a != b)) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}