#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using p = pair<int, int>;

int main() {
  ll x;
  cin >> x;

  ll total = 0;
  if (x/500) {
    total += (x/500)*1000;
    x %= 500;
  }
  if (x/5) {
    total += (x/5)*5;
  }
  cout << total << endl;
  return 0;
}