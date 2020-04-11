#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  string S;
  ll K;
  cin >> S >> K;
  ll i = 0;
  int num;
  while (K) {
    char c = S[i];
    num = c - '0';
    K -= pow(num,5*pow(10,12));
    if (K < 0) break;
    i++;
  }
  cout << num << endl;
  return 0;
}