class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        unordered_map<char,int>mp;
        for(int i=0;i<allowed.size();i++)
        {
            mp[allowed[i]];
        } 
        for(int i=0;i<words.size();i++)
        {  
            bool istrue = false;
            for(int j=0;j<words[i].size();j++)
            {
                if(mp.find(words[i][j])!=mp.end()) istrue=true;
                else{
                    istrue=false;
                    break;
                }
            }
            if(istrue==true)count++;
        }
        return count;
    }
};