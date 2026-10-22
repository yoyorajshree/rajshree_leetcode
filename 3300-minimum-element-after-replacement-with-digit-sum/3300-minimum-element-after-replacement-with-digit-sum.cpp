class Solution {
public:
    int minElement(vector<int>& nums) {
        int minm = INT_MAX;

        for(int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int sum = 0;

            while(num > 0) {
                int digit = num % 10;
                sum += digit;
                num /= 10;
            }

            minm = min(minm, sum);
        }

        return minm;
    }
};