#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int N;
  cin >> N;
  vector<int> d(N);
  rep(i,N) cin >> d[i];
  
  int ans = 0;
  for(int i = 0; i < N; i++) {
    for(int j = i+1; j < N; j++) {
      ans += d[i] * d[j];
    }
  }
  cout << ans << endl;
  return 0;
}