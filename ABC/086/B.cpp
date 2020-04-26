#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int a, b; cin >> a >> b;
  int c = stoi(to_string(a) + to_string(b));
  double r = pow(c, 0.5);
  cout << (floor(r) == r ? "Yes" : "No") << endl;
  return 0;
}