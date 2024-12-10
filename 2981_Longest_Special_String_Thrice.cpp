class Solution {
public:
    
    int maximumLength(string s) {
        int n = s.size();
        int result = -1;
        for (char c = 'a'; c <= 'z'; c++) {
            for (int i = 1; i <= n; i++) {
                if (getOccurrence(s, c,i) >= 3) result = max(result, i);
            }
        }
        return result;
    }
private:
    int getOccurrence(const string& s, char c, int len) {
        int ff = 0;
        for (int i = 0; (i + len) <= s.size(); i++) {
            bool matched = true;
            for (int j = 0; j < len; j++) {
                if (s[i + j] != c) {
                    matched = false;
                    break;
                }
            }
            if (matched) ff++;
        }
        return ff;
    }
};
