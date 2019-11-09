#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  ll N;
  ll K;
  cin >> N >> K;
  vector<ll> A(N);
  rep(i,N) cin >> A[i];
  

  ll inner_sum = 0;
  vector<ll> B(N, 0);
  for (ll i = 0; i < N; i++) {
    ll a = 0;
    for (ll j = i+1; j < N; j++) {
      if (A[i] > A[j]) a++;
    }
    inner_sum += a;
    B[i] = a;
  }

  ll ans = 0;
  ll p = pow(10,9) + 7;

  for (ll i = 0; i < N; i++) {
    for (ll j = K-1; j > 0; j--) {
      ans += B[i]*j;
    }
  }
  ans += inner_sum*K;
  cout << ans%p << endl;
  return 0;
}