class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        
        int maxTime = releaseTimes[0];
        char ans = keysPressed[0];

        for(int i = 1; i < releaseTimes.size(); i++) {
            
            int duration = releaseTimes[i] - releaseTimes[i - 1];

            if(duration > maxTime) {
                maxTime = duration;
                ans = keysPressed[i];
            }
            else if(duration == maxTime && keysPressed[i] > ans) {
                ans = keysPressed[i];
            }
        }

        return ans;
    }
};