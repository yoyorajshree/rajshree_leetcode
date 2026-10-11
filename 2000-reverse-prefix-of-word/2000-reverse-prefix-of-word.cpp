class Solution {
public:
    string reversePrefix(string word, char ch) {
        string subs1;
        string subs2;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]==ch){
            subs1=word.substr(0,i+1);
            subs2=word.substr(i+1);
            reverse(subs1.begin(), subs1.end());
            return subs1+subs2;}
        }
        return word;
    }
};