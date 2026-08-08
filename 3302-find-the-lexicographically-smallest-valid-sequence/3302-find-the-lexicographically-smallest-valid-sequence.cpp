class Solution {
public:
    vector<int> validSequence(string word1, string word2) {

        int n = word1.size();
        int m = word2.size();

        if(m == 1)
            return {0};

        // suf[i] = how many characters of word2
        // are still unmatched when matching from the right
        vector<int> suf(n + 1, m);

        int j = m - 1;

        for(int i = n - 1; i >= 0; i--) {
            if(j >= 0 && word1[i] == word2[j])
                j--;

            suf[i] = j + 1;
        }

        vector<int> ans;

        j = 0;
        bool usedMismatch = false;

        for(int i = 0; i < n && ans.size() < m; i++) {

            // Exact match
            if(word1[i] == word2[j]) {
                ans.push_back(i);
                j++;
            }

            // Use our one allowed mismatch
            else if(!usedMismatch) {

                // Check whether we can still finish word2
                int matchedFromRight = m - suf[i + 1];

                if(j + 1 + matchedFromRight >= m) {
                    ans.push_back(i);
                    j++;
                    usedMismatch = true;
                }
            }
        }

        if(ans.size() != m)
            return {};

        return ans;
    }
};