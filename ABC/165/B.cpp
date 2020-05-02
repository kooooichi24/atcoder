#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  ll X; cin >> X;
  ll start = 100;
  ll cnt = 0;
  while (start < X) {
    start = floor(start*1.01);
    cnt++;
  }
  cout << cnt << endl;
  return 0;
}