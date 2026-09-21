class Solution {
public:
    string reverseVowels(string s) {
        string vowels="aeiouAEIOU";
        vector<int>pos;
        for(int i=0;i<s.length();i++)
        {
            if(vowels.find(s[i]) != string::npos)
                pos.push_back(i);
        }

        for(int i = 0, j = pos.size() - 1; i < j; i++, j--) {
            swap(s[pos[i]], s[pos[j]]);
        }

        return s;
    }
};