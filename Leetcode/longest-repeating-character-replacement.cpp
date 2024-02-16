class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        if(n==1) return n;

        unordered_map<char, int> mp;
        mp[s[0]]++;
        int maxm = mp[s[0]], best = 0;
        for(int i=0, j = i+1; j < n; j++){
            mp[s[j]]++;
            maxm = max(maxm, mp[s[j]]);
            int windowlen = j - i + 1;

            if(windowlen - maxm > k){
                mp[s[i]]--;
                i++;
            } else {
                best = max(best, windowlen);
            }
        }
        return best;
    }
};