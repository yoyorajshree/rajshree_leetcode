class Solution {
public:
    string reversePrefix(string s, int k) {
        int n=s.length();
        string subs1=s.substr(0,k);
        string subs2=s.substr(k,n-k);
        reverse(subs1.begin(), subs1.end());
        return subs1+subs2;
    }
};