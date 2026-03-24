//problem-Valid Anagram
// Pattern: Hashing (Frequency)
// Idea: Count compare
// Trick: “same characters / rearrangement”

//Example 1:
// Input: s = "anagram", t = "nagaram"
// Output: true

//code-
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector <int> count(26,0);
        for(char c:s){
            count[c-'a']++;

        }
        for(char c:t){
            count[c-'a']--;
        }
        for(int x:count){
            if(x!=0 ) return  false;
        }
        return true;
    }
};

