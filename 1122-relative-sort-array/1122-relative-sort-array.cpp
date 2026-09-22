class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>res;
        map<int,int>mp;

        for(int x:arr1)
            mp[x]++;
        
        for(int x:arr2)
        {
            while(mp[x]>0)
            {
                res.push_back(x);
                mp[x]--;
            }
        }

        for(auto p:mp)
        {
            while(p.second>0)
            {
                res.push_back(p.first);
                p.second--;
            }
        }
        return res;
    }
};