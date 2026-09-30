class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>res;
        sort(nums.begin(), nums.end());
        int j=0;
        for(int i =nums[0];i<nums.back();i++){
            if(nums[j]==i){
                j++;
            }
            else{
                res.push_back(i);
            }
        }

        return res;
    }
};