#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  int x = x2-x1;
  int y = y2-y1;
  cout << x2-y << " " << y2+x << " " << x2-y-x << " " << y2+x-y << endl;
  return 0;
}