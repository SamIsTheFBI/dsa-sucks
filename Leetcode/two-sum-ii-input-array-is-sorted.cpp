class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        vector<int> ans{1, 2};
        if(n==2) {
            return ans;
        }

        for(int i=0, j = n-1; i < n && j > -1; ){
            int sum = numbers[i] + numbers[j];
            if(sum > target) j--;
            else if(sum < target) i++;
            else {
                ans[0] = i+1;
                ans[1] = j+1;
                break;
            }
        }
        return ans;
    }
};