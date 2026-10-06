class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        vector<pair<int,int>>p;
        for(int i=0;i<intervals.size();i++)
        {
            p.push_back({intervals[i][0], intervals[i][1]});
        }
        sort(p.begin(), p.end(), [](auto &a, auto &b) {
            return a.second < b.second;
        });

        int count=0;
        int lfinish=p[0].second;
        // for(auto x:p)
        for(int i = 1; i < p.size(); i++)
        {
            int l_time=p[i].second;
            int s_time=p[i].first;

            if(s_time<lfinish)
            {
                count++;
            }
            else
            lfinish=l_time;
        }
        return count;
    }
};