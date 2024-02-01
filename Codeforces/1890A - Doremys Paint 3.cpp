#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) fixed << setprecision(n)

bool allCharactersSame(string s) {
  int n = (int)s.length();
  for (int i = 1; i < n; i++)
    if (s[i] != s[0])
      return false;

  return true;
}

int a[1000000], b[1000000];
void solve() {
  int n;
  cin >> n;
  // int arr[n];
  multiset<int> ms;
  set<int> s;
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    s.insert(tmp);
    ms.insert(tmp);
    a[tmp] = ms.count(tmp);
  }

  if (n == 2) {
    cout << "YES";
    return;
  }

  if (int(s.size()) > 2) {
    cout << "NO";
    return;
  }

  if (int(s.size()) == 1) {
    cout << "YES";
    return;
  }

  auto itr = s.begin();
  int a = *itr++;
  int b = -1;
  if (int(s.size()) == 2) {
    b = *itr;
  }

  if (ms.count(a) == ms.count(b) + 1 || ms.count(b) == ms.count(a) + 1 ||
      ms.count(b) == ms.count(a)) {
    cout << "YES";
    return;
  }

  cout << "NO";
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
