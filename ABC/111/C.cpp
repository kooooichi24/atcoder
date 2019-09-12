#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> v_odd(100100), v_even(100100);
  int odd1count = 0, odd2count = 0, even1count = 0, even2count = 0;
  int odd1value = 0, even1value = 0;
  int v;
  rep(i,n) {
    cin >> v;
    if (i%2 == 0) {
      v_odd[v]++;
      if (v_odd[v] > odd1count) {
        odd1count = v_odd[v];
        odd1value = v;
      } else if (v_odd[v] > odd2count) {
        odd2count = v_odd[v];
      }
    } else {
      v_even[v]++;
      if (v_even[v] > even1count) {
        even1count = v_even[v];
        even1value = v;
      } else if (v_even[v] > even2count) {
        even2count = v_even[v];
      }
    }
  }

  int ans;
  if (odd1value != even1value) {
    ans = n - odd1count - even1count;
  } else {
    ans = n - max(odd1count+even2count, odd2count+even1count);
  }
  cout << ans << endl;
  return 0;
}