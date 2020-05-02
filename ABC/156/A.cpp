#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int N, R; cin >> N >> R;
  cout << (N >= 10 ? R : R+100*(10-N)) << endl;
  return 0;
}