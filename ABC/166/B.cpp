#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using p = pair<int, int>;

int main() {
  int N, K;
  cin >> N >> K;

  vector<bool> ans(N,false);

  rep(i,K) {
    int d; cin >> d;
    vector<int> A(d);
    rep(j,d) cin >> A[j];
    
    rep(j,d) {
      ans[A[j]-1] = true;
    }
  }
  int cnt = 0;
  rep(i,N) {
    if (ans[i] == false) {
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}