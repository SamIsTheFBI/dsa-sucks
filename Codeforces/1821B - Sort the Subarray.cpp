#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n) <<

void solve() {
  int n;
  cin >> n;

  int a[n], b[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];

  // Finding idx where a[i] != b[i] (firstIdx & lastIdx)
  int firstIdx = 0, lastIdx = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] != b[i])
      lastIdx = i;
    if (a[n - i - 1] != b[n - i - 1])
      firstIdx = n - i - 1;
  }

  // Check if any elem before firstIdx <= elem at firstIdx
  int i = firstIdx;
  while (i--)
    if (a[i] <= a[i + 1] && b[i] <= b[i + 1])
      firstIdx--;
    else
      break;

  // Check if any elem after lastIdx >= elem at lastIdx
  i = lastIdx;
  while (++i < n) {
    if (a[i - 1] <= a[i] && b[i - 1] <= b[i])
      lastIdx++;
    else
      break;
  }

  cout << firstIdx + 1 << " " << lastIdx + 1;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  // solve();

  ll T;
  cin >> T;
  while (T--) {
    solve();
    cout << "\n";
  }

  return 0;
}
