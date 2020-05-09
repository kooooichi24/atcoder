#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using p = pair<int, int>;

int main() {
  int n, a;
  cin >> n >> a;

  cout << (n%500 > a ? "No" : "Yes") << endl;
  return 0;
}