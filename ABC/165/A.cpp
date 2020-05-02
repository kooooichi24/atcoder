#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int K, A, B; cin >> K >> A >> B;
  string result = "NG";
  for (int i = A; i <= B; i++) {
    if (i%K == 0) result = "OK";
  }
  cout << result << endl;
  return 0;
}