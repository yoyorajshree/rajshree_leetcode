class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,int>mp;
        int maxm=0;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        // for(int i=0;i<s.size();i++)
        // {
        //     for(int j=0;j<s.size()-1;j++)
        //     {
        //         substring=s.substr(i,j);
        //         mp[s]
        //     }
        //     maxm=max(maxm)
        // }
        return mp.size();
    }
};