#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int K; cin >> K;
  int ans = K%2 == 0 ? (K/2)*(K/2) : (K/2)*((K/2)+1);
  cout << ans << endl;
  return 0;
}