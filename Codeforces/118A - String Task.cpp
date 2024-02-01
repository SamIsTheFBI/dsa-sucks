#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;

  // lowercase everything
  transform(str.begin(), str.end(), str.begin(), ::tolower);

  string vowels = "aeiouy";

  vector<char> ans;
  for (int i = 0; i < (int)str.length(); i++) {
    char tmp = ' ';
    // Check str for vowels. If there is, then note it.
    // If not noted down any vowels, push_back . and
    // str[i] to answer vector
    for (int j = 0; j < (int)vowels.length(); j++) {
      if (str[i] == vowels[j]) {
        tmp = str[i];
        break;
      }
    }

    if (tmp == ' ') {
      ans.push_back('.');
      ans.push_back(str[i]);
    }
  }

  for (auto x : ans)
    cout << x;
}
