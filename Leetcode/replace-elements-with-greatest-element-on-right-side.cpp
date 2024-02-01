class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        ans.push_back(-1);
        int maxElem = 0;
        for(int i=int(arr.size()) - 1; i > 0; i--){
            maxElem = max(maxElem, arr[i]);
            ans.push_back(maxElem);
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};