#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ff first
#define ss second
#define make make_pair
#define vi vector<int>
#define pb push_back
#define sortarr sort(arr, arr + n)
#define sortav sort(v.begin(), v.end())
#define forl(i, j, k) for (int i = j; i < k; i += 1)
#define forlr(i, j, k) for (int i = j; i >= k; i -= 1)
#define vin(x, v)                                                              \
  for (auto &x : v)                                                            \
    cin >> x;
#define endl "\n"
#define MOD 1000000007
// cout<<fixed<<setprecision(15)<<

void solve() {}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  string s;
  cin >> s;

  string space = " ";
  for (int i = 0; i < (int)s.length();) {
    if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
      s.erase(s.begin() + i);
      s.erase(s.begin() + i);
      if (i > 0 && s[i - 1] != ' ')
        s.replace(i, 1, space);
      else
        s.erase(s.begin() + i);
    } else {
      i++;
    }
  }

  cout << s;

  return 0;
}
