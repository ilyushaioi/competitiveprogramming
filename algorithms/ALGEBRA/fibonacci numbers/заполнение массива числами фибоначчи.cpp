vector<long long> fib;
fib.push_back(0);
fib.push_back(1);
long long f1 = 0;
long long f2 = 1;
while (f1 + f2 <= MAX) {
  fib.push_back(f1 + f2);
  long long tmp = f1 + f2;
  f1 = f2;
  f2 = tmp;
}
