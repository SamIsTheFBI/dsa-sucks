#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
// cout<<fixed<<setprecision(15)<<

void solve() {
  int n, m, costOfOne, costOfM;
  cin >> n >> m >> costOfOne >> costOfM;

  if (n * costOfOne < ((costOfM * n) / m)) {
    cout << n * costOfOne;
    return;
  }

  int cost = 0;
  int tmp = n;
  while (tmp % m != 0)
    tmp--;

  n -= tmp;
  cost += ((tmp / m) * costOfM);

  while (n > 0) {
    if (m >= n && (costOfM) < (costOfOne * n)) {
      cost += costOfM;
      n--;
      break;
    } else if (costOfOne < costOfM) {
      n--;
      cost += costOfOne;
    } else {
      n -= m;
      cost += costOfM;
    }
  };

  cout << cost;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  solve();

  return 0;
}
