class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>res;
        for(int i=0;i<words.size();i++)
        {
            int c1=count(words[i].begin(),words[i].end(),x);
            if(c1>0)
                res.push_back(i);
        }
        return res;
    }
};