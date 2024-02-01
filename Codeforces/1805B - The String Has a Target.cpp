#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n) <<

void solve() {
  int n;
  cin >> n;
  char s[n];
  for (int i = 0; i < n; i++) {
    char some;
    cin >> some;
    s[i] = some;
  }
  deque<char> dq;
  for (int i = 0; i < n; i++) {
    dq.push_back(s[i]);
  }

  int replaceIdx = 0;
  deque<char> tmp;

  for (int i = 0; i < n; i++) {
    if (s[i] <= s[replaceIdx] && i > replaceIdx)
      replaceIdx = i;
  }

  for (int i = 1; i < n; i++) {
    if (i == replaceIdx) {

      for (int j = i + 1; j < n; j++) {
        tmp.push_back(dq[j]);
      }
      for (int j = i + 1; j < n; j++) {
        dq.pop_back();
      }
      char t = dq[i];
      dq.pop_back();
      dq.push_front(t);
      for (int j = 0; j < (int)tmp.size(); j++) {
        dq.push_back(tmp[j]);
      }
      break;
    }
  }

  for (auto x : dq)
    cout << x;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int T;
  cin >> T;
  while (T--) {
    solve();
    cout << "\n";
  }

  return 0;
}
