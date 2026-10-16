class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
            res.push_back(nums[i]);
        }
        reverse(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++)
        {
            res.push_back(nums[i]);
        }
        return res;
    }
};