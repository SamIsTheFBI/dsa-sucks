class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = 0;
        vector<int> some;
        some.push_back(nums[0]);
        for(int i=1; i < int(nums.size()); i++){
            if(nums[i-1] != nums[i]) {
                size++;
                some.push_back(nums[i]);
            }
        }

        for(int i=0; i < int(some.size()); i++){
            nums[i] = some[i];
        }

        return size + 1;
    }
};