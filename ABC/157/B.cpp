#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;



int main() {
  vector<vector<int>> A(3, vector<int>(3, 0));
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> A[i][j];
    }
  }
  vector<vector<int>> R(3, vector<int>(3, false));
  int N; cin >> N;
  rep(i,N) {
    int B; cin >> B;
    rep(j,3) {
      rep(k,3) {
        if (A[j][k] == B) {
          R[j][k] = true;
        }
      }
    }
  }

  string result = "No";
  rep(i,3) {
    if (R[0][i] && R[1][i] && R[2][i]) result = "Yes";
    if (R[i][0] && R[i][1] && R[i][2]) result = "Yes";
  }
  if (R[0][0] && R[1][1] && R[2][2]) result = "Yes";
  if (R[0][2] && R[1][1] && R[2][0]) result = "Yes";

  cout << result << endl;
  return 0;
}