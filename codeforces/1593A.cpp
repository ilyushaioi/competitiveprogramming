#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int sol(int best, int oth1, int oth2) {
  return max(0, max(oth1, oth2) + 1 - best);
}

void danelya() {
  int a, b, c;
  cin >> a >> b >> c;
  cout << sol(a, b, c) << ' ' << sol(b, a, c) << ' ' << sol(c, a, b) << '\n';
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
