class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> stot;
        unordered_map<char, char> ttos;
        
        if (s.length() != t.length()) {
            return false;
        }
        
        for (int i = 0; i < s.length(); i++) {
            if (stot.find(s[i]) != stot.end()) {
                if (stot[s[i]] != t[i]) {
                    return false;
                }
            } else {
                if (ttos.find(t[i]) != ttos.end()) {
                    return false;
                }
                stot[s[i]] = t[i];
                ttos[t[i]] = s[i];
            }
        }  
        
        return true;
    }
};
