#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int N; cin >> N;
  vector<string> s(N);
  rep(i,N) {
    cin >> s[i];
  }

  int cnt = 1;
  sort(s.begin(), s.end());
  rep(i,N-1) {
    if (s[i] != s[i+1]) cnt++;
  }
  
  cout << cnt << endl;
  return 0;
}