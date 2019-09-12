#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int n; cin >> n;
  int ans;
  if (n%111 == 0) {
    ans = n;
  } else {
    int a = n/111;
    ans = (a+1)*111;
  }
  cout << ans << endl;
  return 0;
}