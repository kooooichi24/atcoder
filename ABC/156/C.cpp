#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int N; cin >> N;
  vector<int> X(N);
  rep(i,N) cin >> X[i];

  int ans = 10000000;
  sort(X.begin(), X.end());
  for (int i = X[0]; i <= X[N-1]; i++) {
    int s = 0;
    for (int j = 0; j < N; j++) {
      s += abs(pow(i-X[j], 2));
    }
    ans = min(ans, s);
  }
  cout << ans << endl;
  return 0;
}