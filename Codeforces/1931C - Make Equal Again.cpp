#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) fixed << setprecision(n)

void solve() {
  int n;
  cin >> n;
  int arr[n];
  for (auto &x : arr)
    cin >> x;

  int l = 0, idx = -1;
  for (int i = 1; i < n; i++) {
    if (arr[i] != arr[l]) {
      idx = i;
      break;
    }

    l = i;
  }

  if (idx == -1) {
    cout << 0;
    return;
  }

  int end = n;
  for (int i = n - 1; i > -1; i--) {
    if (arr[i] != arr[l]) {
      break;
    }
    end = i;
  }

  int leftCount = end - idx;

  int r = n - 1;
  idx = -1;
  for (int i = n - 2; i > -1; i--) {
    if (arr[i] != arr[r]) {
      idx = i;
      break;
    }

    r = i;
  }

  int start = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] != arr[r]) {
      break;
    }

    start = i;
  }

  int rightCount = r - start;

  cout << min(rightCount, leftCount);
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
  // return 0;

  int T;
  cin >> T;
  while (T--) {
    solve();
    cout << "\n";
  }

  return 0;
}
