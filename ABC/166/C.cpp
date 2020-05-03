#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using p = pair<int, int>;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> H(N), ma(N);
  rep(i,N) {
    cin >> H[i];
    ma[i] = 0;
  }
  rep(i,M) {
    int A, B;
    cin >> A >> B;
    A--; B--;

    ma[A] = max(ma[A], H[B]);
    ma[B] = max(ma[B], H[A]);
  }
  int ans = 0;
  rep(i,N) {
    if (ma[i] < H[i]) ans++;
  }
  cout << ans << endl;
  return 0;
}