class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int bestStart = 0;
        int bestLen = 1;

        for (int i = 0; i < n; i++) {

            // ---- 1) Tek merkezli palindrom (aba gibi) ----
            int left = i;
            int right = i;

            while (left >= 0 && right < n && s[left] == s[right]) {
                int length = right - left + 1;
                if (length > bestLen) {
                    bestLen = length;
                    bestStart = left;
                }
                left--;
                right++;
            }

            // ---- 2) Çift merkezli palindrom (abba gibi) ----
            left = i;
            right = i + 1;

            while (left >= 0 && right < n && s[left] == s[right]) {
                int length = right - left + 1;
                if (length > bestLen) {
                    bestLen = length;
                    bestStart = left;
                }
                left--;
                right++;
            }
        }

        return s.substr(bestStart, bestLen);
    }
};
