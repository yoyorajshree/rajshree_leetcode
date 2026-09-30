class Solution {
public:
    bool selfdivisible(int n){
        vector<int>res;
        int x=n;
        while(n){
            res.push_back(n%10);
            n=n/10;
            if(res.back()==0)return false;
        }
        for(auto it:res){
            if(x%it==0)
                continue;
            else 
                return false;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            if(selfdivisible(i))ans.push_back(i);
        }
        return ans;
    }
};