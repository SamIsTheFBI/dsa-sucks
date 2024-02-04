class Solution {
public:
  vector<int> topKFrequent(vector<int> &nums, int k) {
    int n = nums.size();
    if (n == 1)
      return nums;

    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
      mp[nums[i]]++;
    }

    vector<pair<int, int>> pairs;
    for (auto x : mp) {
      pairs.push_back(x);
    }

    sort(pairs.begin(), pairs.end(), [](pair<int, int> &a, pair<int, int> &b) {
      return a.second > b.second;
    });

    vector<int> ans;
    int i = 0;
    for (auto pair : pairs) {
      if (i++ < k) {
        ans.push_back(pair.first);
        continue;
      } else
        break;
    }

    return ans;
  }
};
