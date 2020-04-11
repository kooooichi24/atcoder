#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int N;
  cin >> N;
  vector<string> W(N);
  rep(i,N) cin >> W[i];

  bool rule1 = true;
  bool rule2 = true;

  rep(i,N) {
    auto result = count(W.begin(), W.end(), W[i]);
    if (result > 1) rule1 = false;
  }
  for (int i = 1; i < N; i++) {
    if (W[i-1].back() != W[i].front()) rule2 = false;
  }

  if (rule1 && rule2) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}