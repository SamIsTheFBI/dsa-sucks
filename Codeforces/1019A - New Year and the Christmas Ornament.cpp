#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n) <<

void solve() {
  int arr[3];
  cin >> arr[0] >> arr[1] >> arr[2];

  int a = 0, b = 0, c = 0;
  int sum = 0;
  while (true) {
    a++;
    b = a + 1;
    c = b + 1;
    sum = a + b + c;
    if (arr[0] - a <= 0 || arr[1] - b <= 0 || arr[2] - c <= 0)
      break;
  }

  cout << sum;
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

  // ll T;
  // cin >> T;
  // while (T--) {
  //   solve();
  //   cout << "\n";
  // }

  return 0;
}
