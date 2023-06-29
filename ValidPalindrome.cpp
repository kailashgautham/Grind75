class Solution {
public:
    bool isPalindrome(string s) {
        int front = 0;
        int back = s.length() - 1;
        while (front <= back) {
            if (tolower(s[front]) >= 97 && tolower(s[front]) <= 122 || (tolower(s[front]) >= 48 && tolower(s[front]) <= 57)) {
                if (tolower(s[back]) >= 97 && tolower(s[back]) <= 122 || (tolower(s[back]) >= 48 && tolower(s[back]) <= 57)) {
                    if (tolower(s[front]) != tolower(s[back])) return false;
                    front += 1;
                    back -= 1;
                } else back -= 1;
            } else front += 1;
        }
        return true;
    }
};