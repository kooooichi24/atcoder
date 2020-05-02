#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int N; cin >> N;
  
  int X;
  bool flag = false;
  rep(i,N+1) {
    if (floor(i*1.08) == N) {
      X = i;
      flag = true;
    }
  }
  if (flag) cout << X << endl;
  else cout << ":(" << endl;
  return 0;
}