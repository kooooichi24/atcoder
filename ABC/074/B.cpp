#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using p = pair<int, int>;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> x(N);
  rep(i,N) {
    cin >> x[i];
  }

  int total = 0;
  rep(i,N) {
    int m = min(2*x[i], 2*(K-x[i]));
    total += m;
  }
  cout << total << endl;
  return 0;
}