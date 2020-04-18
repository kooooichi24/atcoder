#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int N, D, X;
  cin >> N >> D >> X;
  vector<int> A(N);
  rep(i,N) {
    cin >> A[i];
  }
  int total = N + X;
  for (int i = 0; i < N; i++) {
    int j = 1;
    while (j*A[i]+1 <= D) {
      total++;
      j++;
    }
  }

  cout << total << endl;
  return 0;
}