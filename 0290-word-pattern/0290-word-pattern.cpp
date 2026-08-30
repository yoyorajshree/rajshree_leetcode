class Solution {
public:
    bool wordPattern(string pattern, string s) {

        unordered_map<char, string> mp;
        unordered_map<string, char> used;

        stringstream ss(s);
        string word;

        vector<string> words;

        while(ss >> word)
        {
            words.push_back(word);
        }

        if(pattern.size() != words.size())
            return false;

        for(int i = 0; i < pattern.size(); i++)
        {
            char ch = pattern[i];

            if(mp.find(ch) != mp.end())
            {
                if(mp[ch] != words[i])
                    return false;
            }
            else
            {
                if(used.find(words[i]) != used.end())
                    return false;

                mp[ch] = words[i];
                used[words[i]] = ch;
            }
        }

        return true;
    }
};