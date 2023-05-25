#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

void danelya() {
  int a, b;
  cin >> a >> b;
  cout << (a == 0 ? 1 : a + 2 * b + 1) << '\n';
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
