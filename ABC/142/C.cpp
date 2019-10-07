#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int N; cin >> N;
  vector<int> P(N), Q(N);

  rep(i,N) {
    cin >> P[i];
    P[i]--;
  }
  rep(i,N) Q[P[i]] = i;
  rep(i,N) {
    cout << Q[i]+1 << " ";
  }
  cout << endl;
  return 0;
}