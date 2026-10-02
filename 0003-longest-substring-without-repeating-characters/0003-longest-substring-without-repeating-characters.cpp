// 
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char, int> mp;

        int maxm = 0;
        int left = 0;

        for(int i = 0; i < s.size(); i++) {

            if(mp.find(s[i]) != mp.end()) {
                left = max(left, mp[s[i]] + 1);
            }

            mp[s[i]] = i;

            maxm = max(maxm, i - left + 1);
        }

        return maxm;
    }
};