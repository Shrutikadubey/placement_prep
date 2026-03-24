//problem-Valid Palindrome
// Pattern: Two Pointer
// Idea: left/right compare
// Trick: “palindrome / reverse”

//Example 1:

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.

//code-
class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;

        while (l< r) {
            // Skip non-alphanumeric characters
            while (l< r && !isalnum(s[l])) l++;
            while (l< r && !isalnum(s[r])) r--;

            // Compare lowercase versions
            if (tolower(s[l]) != tolower(s[r])) {
                return false;
            }

            l++;
            r--;
        }

        return true;

    }
};

