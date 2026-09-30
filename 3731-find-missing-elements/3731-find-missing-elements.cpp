class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>res;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=i;
        }
        int minm=*min_element(nums.begin(),nums.end());
        int maxm=*max_element(nums.begin(),nums.end());

        for(int i =minm;i<maxm;i++){
            if(mp.find(i)==mp.end())res.push_back(i);
            
        }

        return res;
    }
};