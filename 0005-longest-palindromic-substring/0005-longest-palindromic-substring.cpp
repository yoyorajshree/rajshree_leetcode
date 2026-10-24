// class Solution {
// public:
//     string longestPalindrome(string s) {
//         string ans="";
//         int left=0;
//         int right=s.size();

//         for(int i=left;i<right;i++)
//         {
//             for(int j=i;j<right;j++)
//             {
//                 string temp=s.substr(i,j-i+1);
//                 string rev=temp;

//                 reverse(rev.begin(), rev.end());
//                 if(temp==rev && temp.size()> ans.size())
//                     ans=temp;
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";

        for(int i = 0; i < s.size(); i++) {
            int left = i, right = i;

            while(left >= 0 && right < s.size() && s[left] == s[right]) {
                if(right - left + 1 > ans.size())
                    ans = s.substr(left, right - left + 1);

                left--;
                right++;
            }

            left = i;
            right = i + 1;

            while(left >= 0 && right < s.size() && s[left] == s[right]) {
                if(right - left + 1 > ans.size())
                    ans = s.substr(left, right - left + 1);

                left--;
                right++;
            }
        }

        return ans;
    }
};