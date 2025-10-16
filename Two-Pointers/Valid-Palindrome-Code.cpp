class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";
        for (char &ch : s) {
            if (isalnum(ch)) {
                cleaned += tolower(ch);
            }
        }

        int n = cleaned.size();
        int i = 0, j = n - 1;
        while (i < j) {
            if (cleaned[i] == cleaned[j]) {
                i++;
                j--;
            }
            else return false;
        }

        return true;
    }
};
