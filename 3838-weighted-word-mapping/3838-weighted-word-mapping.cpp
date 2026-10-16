class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        unordered_map<char, int>mp;
        for(int i=0;i<26;i++)
        {
           mp['a'+i]=weights[i];
        }

        string res="";
        for(int i=0;i<words.size();i++)
        {
            int sum=0;
            for(int j=0;j<words[i].size();j++)
            {
                sum += mp[words[i][j]];
            }
            int rest=sum%26;
            char ch = 'z' - rest;

            res+= ch;

        }
        return res;
    }
};