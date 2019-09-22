#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int GCD(int a, int b) { return b ? GCD(b, a%b) : a; }

int main() {
  int N, X;
  cin >> N >> X;
  vector<int> x(N);
  rep(i,N) cin >> x[i];

  x.push_back(X);
  sort(x.begin(), x.end());

  vector<int> diff(N);
  for (int i = 1; i < N+1; i++) {
    diff[i-1] = x[i] - x[i-1];
  }
  int ans = diff[0];
  for (int i = 1; i < N; i++) {
    ans = GCD(ans, diff[i]);
  }
  cout << ans << endl;
  return 0;
}