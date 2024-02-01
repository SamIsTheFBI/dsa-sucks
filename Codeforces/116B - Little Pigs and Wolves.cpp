#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n) <<

void solve() {
  int n, m;
  cin >> n >> m;
  char arr[n][m];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> arr[i][j];

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == 'W') {
        if (i == 0) {
          if (arr[i + 1][j] == 'P') {
            cnt++;
            continue;
          }

          if (j == 0) {
            if (arr[i][j + 1] == 'P') {
              cnt++;
              continue;
            }
          }
          if (j < m - 1 && j > 0) {
            if (arr[i][j + 1] == 'P' || arr[i][j - 1] == 'P') {
              cnt++;
              continue;
            }
          }
          if (j == m - 1) {
            if (arr[i][j - 1] == 'P') {
              cnt++;
              continue;
            }
          }
        }

        if (i > 0 && i < n - 1) {
          if (arr[i + 1][j] == 'P') {
            cnt++;
            continue;
          }
          if (arr[i - 1][j] == 'P') {
            cnt++;
            continue;
          }

          if (j == 0 && j < m - 1) {
            if (arr[i][j + 1] == 'P') {
              cnt++;
              continue;
            }
          }
          if (j < m - 1 && j > 0) {
            if (arr[i][j + 1] == 'P' || arr[i][j - 1] == 'P') {
              cnt++;
              continue;
            }
          }
          if (j == m - 1) {
            if (arr[i][j - 1] == 'P') {
              cnt++;
              continue;
            }
          }
        }

        if (i == n - 1) {
          if (arr[i - 1][j] == 'P') {
            cnt++;
            continue;
          }

          if (j == 0 && j < m - 1) {
            if (arr[i][j + 1] == 'P') {
              cnt++;
              continue;
            }
          }
          if (j < m - 1 && j > 0) {
            if (arr[i][j + 1] == 'P' || arr[i][j - 1] == 'P') {
              cnt++;
              continue;
            }
          }
          if (j == m - 1) {
            if (arr[i][j - 1] == 'P') {
              cnt++;
              continue;
            }
          }
        }
      }
    }
  }

  cout << cnt;
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