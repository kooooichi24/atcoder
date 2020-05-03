#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using p = pair<int, int>;

int N, M, Q;
vector<int> a, b, c, d;
int ans;

void dfs(vector<int> A) {
  if (A.size() == N+1) {
    int now = 0;
    rep(i,Q) {
      if (A[b[i]] -A[a[i]] == c[i]) now += d[i];
    }
    ans = max(ans, now);
    return;
  }
  A.push_back(A.back());
  while(A.back() <= M) {
    dfs(A);
    A.back()++;
  }
}

int main() {
  cin >> N >> M >> Q;
  a = b = c = d = vector<int>(Q);
  rep(i,Q) {
    cin >> a[i] >> b[i] >> c[i] >> d[i];
  }
  dfs(vector<int>(1,1));
  cout << ans << endl;
  return 0;
}