class Solution {
public:
    string oddString(vector<string>& words) {
        
        vector<int> a, b, c;

        for(int i = 0; i < words.size(); i++) {
            
            vector<int> diff;

            for(int j = 1; j < words[i].size(); j++) {
                diff.push_back(words[i][j] - words[i][j - 1]);
            }

            if(i == 0)
                a = diff;
            else if(i == 1)
                b = diff;
            else
                c = diff;

            if(i >= 2) {
                if(diff != a && diff != b)
                    return words[i];

                if(a != b) {
                    if(diff == a)
                        return words[1];
                    else
                        return words[0];
                }
            }
        }

        return "";
    }
};