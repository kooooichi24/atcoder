#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int N; cin >> N;
  vector<int> A(N-1);
  rep(i,N-1) cin >> A[i];

  vector<int> R(N);
  rep(i,N) R[i] = 0;
  
  rep(i,N-1) {
    R[A[i]-1]++;
  }
  rep(i,N) {
    cout << R[i] << endl;
  }
  return 0;
}