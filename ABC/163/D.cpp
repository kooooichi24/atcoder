#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

const int MOD = 1000000007;

int main() {
  ll N, K; cin >> N >> K;

  ll total = 0;
  for (ll k = K; k <= N+1; k++) {
    ll first = k*(k-1)/2;
    ll final = (2*N-k+1) * k/2;
    ll add = final - first + 1;
    total = (total + add) % MOD;
  }

  cout << total << endl;
  return 0;
}