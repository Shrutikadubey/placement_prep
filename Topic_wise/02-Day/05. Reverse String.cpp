//problem-Reverse String
// Pattern: Two Pointer
// Idea: swap left-right
// Trick: “reverse”

//Example 1:

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]

//code-
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        //by using two pointer approach
        int st=0 , e=n-1;
        while (st<=e){
            swap(s[st],s[e]);
            st++;
            e--;

            // this is used for swapping
            // char temp=s[st];
            // s[st]=s[e];
            // s[e]=temp;
            // st++;
            // e--;
        }
//another way of solve is which below using stl function
        // reverse(s.begin(),s.end());
    }
};