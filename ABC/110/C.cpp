#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  string s, t;
  cin >> s >> t;
  sort(s.begin(), s.end());
  sort(t.begin(), t.end());
  vector<int> sv(s.size(), 0), tv(t.size(), 0);
  int scnt = 0, tcnt = 0;
  for (int i = 1; i < s.size(); i++) {
    if (s[i] == s[i-1]) scnt++;
    else {
      sv[scnt]++;
      scnt = 0;
    }

    if (t[i] == t[i-1]) tcnt++;
    else {
      tv[tcnt]++;
      tcnt = 0;
    }
  }
  sv[scnt]++;
  tv[tcnt]++;

  string ans = "Yes";
  rep(i,s.size()) {
    if (sv[i] != tv[i]) {
      ans = "No";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}