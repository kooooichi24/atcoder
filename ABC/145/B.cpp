#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  if (N%2 != 0) {
    cout << "No" << endl;
  } else {
    cout << ((S.substr(0,(N/2)) == S.substr(N/2, (N/2))) ? "Yes" : "No") << endl;
  }
  return 0;
}