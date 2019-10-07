#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  double N; cin >> N;
  double cnt = 0;
  for (int i = 1; i <= N; i++) {
    if (i%2==1) cnt++;
  }
  cout << cnt/N << endl;
  return 0;
}