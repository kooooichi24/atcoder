#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int N, K, Q;
  cin >> N >> K >> Q;
  vector<int> ans(N, 0);
  rep(i,Q) {
    int a;
    cin >> a;
    a--;
    ans[a]++;
  }

  rep(i,N) {
    if (K-Q+ans[i] > 0) cout << "Yes\n";
    else cout << "No\n";
  }
  return 0;
}