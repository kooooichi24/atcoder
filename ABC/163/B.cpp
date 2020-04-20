#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int N, M; cin >> N >> M;
  vector<int> A(M);
  for (int i = 0; i < M; i++) {
    cin >> A[i];
  }

  int total = 0;
  for (int i = 0; i < M; i++) {
    total += A[i];
  }

  int result = N - total;

  cout << (result < 0 ? -1 : result) << endl;
  return 0;
}