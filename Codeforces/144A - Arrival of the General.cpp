#include <bits/stdc++.h>
using namespace std;

// This approach requires the understanding of passing array by reference

int sec = 0;

void maxToZero(int *arr, int n, int *max, int i) {
  for (; i > 0; i--) {
    int tmp = arr[i - 1];
    arr[i - 1] = arr[i];
    arr[i] = tmp;
    sec++;
  }
}

void minToN(int *arr, int n, int *min, int i) {
  for (; i < (n - 1); i++) {
    swap(arr[i], arr[i + 1]);
    sec++;
  }
}

int main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int *min = min_element(arr, arr + n);
  int *max = max_element(arr, arr + n);

  int idxMin = 0, idxMax = 0;
  for (int i = 0; i < n; i++)
    if (arr[i] == *min)
      idxMin = i; // no break because we need the min elem closest to last index
  for (int i = 0; i < n; i++) {
    if (arr[i] == *max) {
      idxMax = i;
      break; // because that way we get the max elem closest to index 0
    }
  }

  if (idxMax < idxMin) {
    maxToZero(arr, n, max, idxMax);
    minToN(arr, n, min, idxMin);
  } else {
    // When idxMax > idxMin, then the position
    // of max will be swapped as per the process
    // Hence the -1
    minToN(arr, n, min, idxMin);
    maxToZero(arr, n, max, idxMax - 1);
  }

  cout << sec;
}
