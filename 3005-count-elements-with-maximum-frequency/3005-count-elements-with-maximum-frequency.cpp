class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        int maxm=0;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto x:mp)
        {
            maxm=max(maxm,x.second);
        }

        for(auto x:mp)
        {
            if(x.second==maxm)
                sum+=x.second;
        }
        return sum;
    }
};