#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  string n; cin >> n;
  rep(i,3) {
    if (n[i] == '1') n[i] = '9';
    else n[i] = '1';
  }
  cout << n << endl;
  return 0;
}