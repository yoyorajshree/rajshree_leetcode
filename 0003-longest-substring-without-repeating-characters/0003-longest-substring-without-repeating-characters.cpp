// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int maxm=0;
//         for(int i=0;i<s.size();i++)
//         {
//             unordered_map<char,int> mp;
//             for(int j=i;j<s.size();j++)
//             {
//                 if(mp[s[j]]>0)
//                 break;

//                 mp[s[j]]++;
//                 maxm=max(maxm,j-i+1);
//             }
//         }

//         return maxm;
//     }
// };
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