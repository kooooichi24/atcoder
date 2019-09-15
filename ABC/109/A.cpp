#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int a, b;
  cin >> a >> b;

  bool ok = false;
  int r;
  rep(i,3) {
    if ((a*b*(i+1))%2 != 0) {
      ok = true;
      break;
    }
  }
  cout << (ok ? "Yes" : "No") << endl;
  return 0;
}