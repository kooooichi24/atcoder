#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> h(N);
  rep(i,N) cin >> h[i];
  
  int cnt = 0;
  rep(i,N) {
    if (h[i] >= K) cnt++;
  }
  cout << cnt << endl;
  return 0;
}