class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length())
            return false;

        unordered_map<char, char>mp1;
        unordered_map<char, char>mp2;
        for(int i=0;i<word2.length();i++)
        {
            mp2[word2[i]]++;
        }
        for(int i=0;i<word1.length();i++)
        {
            mp1[word1[i]]++;
        }

        for(auto x:mp1)
        {
            if(mp2.find(x.first)==mp2.end())
                return false;
        }

        vector<int>freq1;
        vector<int>freq2;

        for(auto x:mp1)
            freq1.push_back(x.second);
        for(auto x:mp2)
            freq2.push_back(x.second);

        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        return freq1==freq2;
    }
};