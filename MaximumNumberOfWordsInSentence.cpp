class Solution {
public:

    int numberOfWords(string s) {
        int words = 0;
        for(int i = 0; i < s.length(); i++) {
            if(isspace(s[i])) words++;
        }
        return words+1;
    }

    int mostWordsFound(vector<string>& sentences) {
        int maxi = 0;
        for(string s : sentences) {
            maxi = max(maxi, numberOfWords(s));
        }
        return maxi;
    }
};