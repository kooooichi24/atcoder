#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

vector<ll> divisor(ll n) {
  vector<ll> ret;
  for(ll i = 1; i * i <= n; i++) {
    if(n % i == 0) {
      ret.push_back(i);
      if(i * i != n) ret.push_back(n / i);
    }
  }
  sort(ret.begin(), ret.end());
  return (ret);
}

int main() {
  ll N;
  cin >> N;
  vector<ll> r = divisor(N);

  ll array_size = r.size();
  ll a = array_size / 2;

  ll ans;
  if (N == r[a-1]*r[a]) {
    ans = (r[a-1]-1) + (r[a]-1);
  } else {
    ans = (r[a]-1) + (r[a]-1);
  }
  
  cout << ans << endl;
  return 0;
}