#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, v = 0;
  cin >> n >> m;

  // Take the largest value of time
  // taken to solve correctly
  int arr1[n];
  for (int i = 0; i < n; i++) {
    cin >> arr1[i];
    if (v < arr1[i])
      v = arr1[i];
  }

  // Check if atleast 1 correct answer
  // solving time satisfies
  // 2 * a <= v
  int k = 0;
  for (int i = 0; i < n; i++) {
    if (2 * arr1[i] <= v)
      k = 1;
  }

  // If not, then v = 2 * minimum time
  // for correct solution
  int min = *(min_element(arr1, arr1 + n));
  if (!k) {
    v = 2 * min;
  }

  // Check if any incorrect solution time
  // is less than or equal to v
  for (int i = 0; i < m; i++) {
    int tmp;
    cin >> tmp;
    if (tmp <= v)
      v = -1;
  }

  cout << v;
}
