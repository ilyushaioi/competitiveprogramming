#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

void danelya() {
  long long n, x;
  cin >> n >> x;
  char s;
  long long k = 0;
  for (int i = 0; i < n; i++) {
    long long p;
    cin >> s >> p;
    if (s == '+') {
      x += p;
    }
    else if (p <= x) {
      x -= p;
    }
    else {
      k++;
    }
  }
  cout << x << ' ' << k << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int TEST = 1;
//  cin >> TEST;
  while (TEST --> 0) {
    danelya();
  }
  return 0;
}
