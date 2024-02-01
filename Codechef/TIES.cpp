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

void add_to_array(ll query_val, ll *arr, int query_typ, ll n) {
  for (ll i = 0; i < n; i++) {
    if (arr[i] % 2 == 0 && query_typ == 0)
      arr[i] += query_val;
    else if (arr[i] % 2LL != 0 && query_typ == 1)
      arr[i] += query_val;
  }
}

int a[1000000], b[1000000];
void solve() {
  int n;
  cin >> n;
  int arr[n];
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    sum += arr[i];
  }

  int k = 1;
  for (int i = 1; i < n; i++)
    if (arr[i] != arr[0])
      k = 0;

  if (k) {
    cout << "YES";
    return;
  }

  if (sum % n != 0) {
    cout << "NO";
    return;
  }

  int num = sum / n;

  int neg = 0, pos = 0;
  for (int i = 0; i < n; i++) {
    if (abs(num - arr[i]) % 2 != 0) {
      cout << "NO";
      return;
    }
    if (arr[i] > num) {
      neg -= ((num - arr[i]) / 2);
    }

    if (arr[i] <= num) {
      pos += ((num - arr[i]) / 2);
    }
  }

  if (neg + pos) {
    cout << "YES";
  } else {
    cout << "NO";
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

  ll T;
  cin >> T;
  while (T--) {
    solve();
    cout << "\n";
  }

  return 0;
}
