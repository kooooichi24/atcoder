#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int N, K; cin >> N >> K;
  int cnt = 0;
  while (N > 0) {
    N /= K;
    cnt++;
  }
  cout << cnt << endl;
  return 0;
}