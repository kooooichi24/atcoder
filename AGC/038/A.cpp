#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int H, W, A, B;
  cin >> H >> W >> A >> B;

  vector<vector<int>> ans(H, vector<int>(W));
  rep(i,H) {
    rep(j,W) {
      if (i<B && j<A) cout << 0;
      else if (i<B) cout << 1;
      else if (j<A) cout << 1;
      else cout << 0;
    }
    cout << endl;
  }
  
  return 0;
}
