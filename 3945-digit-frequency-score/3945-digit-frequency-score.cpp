class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum=0;
        string s= to_string(n);
        unordered_map<char,int>mp;
        for(auto x:s)
        {
            mp[x]++;
        }
        for(auto x:mp)
        {
            sum=sum+((x.first-'0') * x.second);
        }
        return sum;
    }
};