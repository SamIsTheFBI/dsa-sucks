class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mp;
        int maxm = 0;
        for(int i=0; i < n; i++){
            mp[nums[i]]++;
            if(mp[nums[i]] > (n/2) )
                maxm = nums[i];
        }

        return maxm;
    }
};