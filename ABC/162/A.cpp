#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
  string n; cin >> n;
  string result = "No";
  rep(i,3) {
  	if (n[i] == '7') result = "Yes";
  }
  cout << result << endl;
  return 0;
}