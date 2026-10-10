class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> mp;
        vector<int> res;
        int count = 0;
        int removed = 0;

        for(int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }

        for(auto x : mp)
        {
            res.push_back(x.second);
        }

        sort(res.rbegin(), res.rend());

        for(int i = 0; i < res.size(); i++)
        {
            removed += res[i];
            count++;

            if(removed >= arr.size() / 2)
                break;
        }

        return count;
    }
};