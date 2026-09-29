class Solution {
public:
    int maxFreqSum(string s) {
    unordered_map<char,int>mp;
    int maxm1=0;
    int maxm2=0;
    for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                mp[s[i]]++;
                maxm1=max(maxm1, mp[s[i]]);
            }
        }
    for(int i=0;i<s.size();i++)
        {
            if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&& s[i]!='u')
            {
                mp[s[i]]++;
                maxm2=max(maxm2, mp[s[i]]);
            }
        }
        return maxm1+maxm2;
    }
};