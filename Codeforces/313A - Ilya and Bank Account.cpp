#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
// cout<<fixed<<setprecision(15)<<

void solve() {
  int n;
  cin >> n;
  if (n > 0) {
    cout << n;
    return;
  }

  int last = (n % 10);
  n /= 10;
  int secondLast = (n % 10);

  if (abs(last) > abs(secondLast))
    cout << n;
  else {
    n /= 10;
    n = (n * 10) + last;
    cout << n;
  }
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
