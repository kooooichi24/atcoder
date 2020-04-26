#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int A, B, C, D; cin >> A >> B >> C >> D;
  string r = "Yes";
  while (A > 0 || C > 0) {
    C -= B;
    if (C <= 0) {
      r = "Yes";
      break;
    }
    A -= D;
    if (A <= 0) {
      r = "No";
      break;
    }
  }
  cout << r << endl;
  return 0;
}