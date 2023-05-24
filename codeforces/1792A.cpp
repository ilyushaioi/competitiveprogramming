#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

void danelya() {
  int n;
  cin >> n;
  int cnt1 = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    cnt1 += (x == 1);
  }
  cout << n - cnt1 / 2 << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int TEST = 1;
  cin >> TEST;
  while (TEST --> 0) {
    danelya();
  }
  return 0;
}
