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
  int arr[n], sum = 0;
  for (auto &a : arr) {
    cin >> a;
    sum += a;
  }

  int num = sum / n;
  int rem = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] > num) {
      int tmp = arr[i] - num;
      arr[i] -= tmp;
      rem += tmp;
    } else if (arr[i] < num && rem >= num - arr[i]) {
      int tmp = num - arr[i];
      arr[i] += tmp;
      rem -= tmp;
    }
  }

  if (rem > 0) {
    cout << "NO";
  } else {
    cout << "YES";
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
