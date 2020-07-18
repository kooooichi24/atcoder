#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using p = pair<int, int>;

int main() {
  int n;
  cin >> n;

  int result =  n % 1000 == 0 ? 0 : 1000 - (n % 1000);

  cout << result << endl;
  return 0;
}