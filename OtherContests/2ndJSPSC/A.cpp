#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int N; cin >> N;
  int ans = 0;
  for (int i = 1; i < N; i++) {
    if (N-i != i) ans++;
  }
  cout << ans/2 << endl;
  return 0;
}