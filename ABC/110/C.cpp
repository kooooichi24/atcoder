#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  string S, T;
  cin >> S >> T;
  map<char, char> sm, tm;
  bool ok = true;

  rep(i,S.size()) {
    char s = S[i], t = T[i];
    if (sm.count(s) && sm[s]!=t) ok = false;
    if (tm.count(t) && tm[t]!=s) ok = false;
    sm[s] = t;
    tm[t] = s;
  }
  if (ok) puts("Yes");
  else puts("No");
  return 0;
}