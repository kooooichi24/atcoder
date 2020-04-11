#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  string S; cin >> S;
  bool flag = true;
  rep(i,S.size()) {
    if ((i+1)%2!=0 && S[i]=='L') flag = false;
    if ((i+1)%2==0 && S[i]=='R') flag = false;
  }

  cout << (flag ? "Yes" : "No") << endl;
  return 0;
}