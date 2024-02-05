class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> s;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i < n; i++){
            if(i && nums[i] == nums[i-1]) continue;

            int left = nums[i];
            for(int j=i+1, k=n-1; j < k; ){
                int mid = nums[j];
                int right = nums[k];
                int sum = left + mid + right;
                if(sum > 0) k--;
                else if(sum < 0) j++;
                else {
                    vector<int> some(3);
                    some[0] = left;
                    some[1] = mid;
                    some[2] = right;
                    s.insert(some);
                    j++;
                    //break;
                }
            }
        }

        for(auto x: s) ans.push_back(x);

        return ans;
    }
};