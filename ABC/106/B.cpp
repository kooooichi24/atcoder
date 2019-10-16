#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int div_cnt(int n) {
  int c = 0;
  for (int i = 1; i <= n; i++) {
    if (n%i==0) c++;
  }
  return c;
}

int main() {
  int N;
  cin >> N;
  
  int ans = 0;
  for (int i = 1; i <= N; i++) {
    if (i%2!=0 && div_cnt(i) == 8) ans++;
  }
  cout << ans << endl;
  return 0;
}