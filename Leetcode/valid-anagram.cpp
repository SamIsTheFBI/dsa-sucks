class Solution {
public:
    bool isAnagram(string s, string t) {
        int map[26] = {0};

        if(s.size() != t.size()) return false;

        for(int i=0; i < int(s.size()); i++){
            int idx = s[i] - 'a';
            map[idx]++;
        }
        
        for(int i=0; i < int(t.size()); i++){
            int idx = t[i] - 'a';
            map[idx]--;
        }

        for(int i=0; i < 26; i++){
            if(map[i] != 0)
                return false;
        }

        return true;
    }
};