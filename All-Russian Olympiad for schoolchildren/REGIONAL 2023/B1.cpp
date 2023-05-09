#include <bits/stdc++.h>

using namespace std;

vector<long long> fib;
const long long MAX = 1'000'000'000'000'000'000LL;
 
long long ans(long long n, long long p) {
  if (n == 1) {
    return 1;
  }
  if (p >= fib.size()) {
    return 0;
  }
  if (n < fib[p]) {
    return 0;
  }
  long long result = ans(n, p + 1);
  if (n % fib[p] == 0) {
    result += ans(n / fib[p], p);
  }
  return result;
}
 
long long solve(long long n) {
  return ans(n, 0);
}
 
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
 
  fib.push_back(2);
  fib.push_back(3);
  long long f1 = 2;
  long long f2 = 3;
  while (f1 + f2 <= MAX) {
    fib.push_back(f1 + f2);
    long long tmp = f1 + f2;
    f1 = f2;
    f2 = tmp;
  }
 
  int TEST = 1;
  cin >> TEST;
  while (TEST --> 0) {
    long long n;
    cin >> n;
    cout << solve(n) << '\n';
  }
 
  return 0;
}
