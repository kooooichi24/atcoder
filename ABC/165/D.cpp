#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  ll A, B, N, ans;
  cin >> A >> B >> N;

  if (N >= B) ans = floor(A*(B-1)/B);
  else ans = floor((A*N)/B);
  cout << ans << endl;
  return 0;
}