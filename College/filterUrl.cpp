#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  string s;
  getline(cin, s);
  if (regex_match(
          s.begin(), s.end(),
          regex("(https|http)(://)(.*)(.com|.in|.au|.co|.dev|.xyz)(.*)"))) {
    cout << "URL Detected!";
  } else
    cout << "Not a URL!";
  return 0;
}
