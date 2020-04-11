#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  int A, B;
  
  int A_SUM = 0;
  int B_SUM = 0;

  for (int i = 0; i < N; i++) {
    cin >> A >> B;
    if (A > B) {
      A_SUM += A + B;
    } else if (A == B) {
      A_SUM += A;
      B_SUM += B;
    } else {
      B_SUM += A + B;
    }
  }

  cout << A_SUM << " " << B_SUM << endl;
  return 0;
}