#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using p = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) {
    cin >> a[i];
  }

  sort(a.begin(), a.end(), greater<int>());
  int a_sum, b_sum;
  a_sum = 0;
  b_sum = 0;
  rep(i,n) {
    if (i%2 == 0) a_sum+= a[i];
    else b_sum += a[i];
  }

  cout << a_sum-b_sum << endl;
  return 0;
}