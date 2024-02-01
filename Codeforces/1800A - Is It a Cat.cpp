#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    string meow = "meow";
    char arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    int cnt = 0, j = 0, i = 0;
    while (i < n) {

      if (j > 3 && tolower(arr[i]) != 'w') {
        cnt = 0;
        break;
      } else if (arr[i])

        if (tolower(arr[i]) == meow[j]) {
          cnt++;
          j++;
        }

      if (meow.find(tolower(arr[i])) == std::string::npos)
        cnt = 0;

      i++;
    }

    cout << (cnt == 4 && i==n ? "YES\n" : "NO\n");
  }
}