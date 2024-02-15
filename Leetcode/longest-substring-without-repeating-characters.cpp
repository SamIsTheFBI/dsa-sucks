class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n <= 1) return n;

        string sub = "";
        int cnt = 0, best = 0;
        for(int i=0; i < n; i++){
            sub += s[i];

            int init = 0;
            for(; i && init < sub.size() - 1;){
                if(s[i] == sub[init]){
                    sub.erase(sub.begin());
                    init = 0;
                } else {
                    init ++;
                }
            }

            best = max(best, int(sub.size()));
        }
        return best;
    }
};