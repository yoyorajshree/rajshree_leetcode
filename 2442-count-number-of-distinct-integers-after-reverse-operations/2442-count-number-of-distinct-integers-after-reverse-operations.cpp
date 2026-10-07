class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
            res.push_back(nums[i]);
             int reverse=0;
             int temp=nums[i];
            while(temp>0)
            {
                int digit=temp%10;
                reverse=reverse*10+digit;
                temp=temp/10;
            }
            res.push_back(reverse);
        }

        for(int i=0;i<res.size();i++)
        {
            mp[res[i]]++;

        }
            return mp.size();

    }
};