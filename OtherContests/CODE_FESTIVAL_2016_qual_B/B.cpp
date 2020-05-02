#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int N, A, B; cin >> N >> A >> B;
  string S; cin >> S;

  int total = 0;
  int total_b = 0;
  vector<string> result(N);
  rep(i,N) {
    if (S[i] == 'a') {
      if (total < A+B) {
        result[i] = "Yes";
        total++;
      } else {
        result[i] = "No";
      }
    } else if (S[i] == 'b') {
      if (total < A+B && total_b < B) {
        result[i] = "Yes";
        total++;
        total_b++;
      } else {
        result[i] = "No";
      }
    } else if (S[i] == 'c') {
      result[i] = "No";
    }
  }
  
  rep(i,N) {
    cout << result[i] << endl;
  }
  return 0;
}