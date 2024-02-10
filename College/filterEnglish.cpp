#include <bits/stdc++.h>
using namespace std;

void filterEnglish(char ch) {
  if (ch - 'a' >= 0 && ch - 'a' < 26 || ch - 'A' >= 0 && ch - 'A' < 26 ||
      int(ch) == 32)
    cout << ch;
}

int main() {
  ifstream myText;
  myText.open("unfilteredText.txt");

  string str;

  if (myText.is_open()) {
    while (myText) {
      getline(myText, str);
      for (char ch : str)
        filterEnglish(ch);
    }
  }

  return 0;
}
