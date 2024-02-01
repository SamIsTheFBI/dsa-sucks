#include <bits/stdc++.h> 
using namespace std;
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    auto maxm = max_element(arr.begin(), arr.begin() + n);
    return *maxm;
}
