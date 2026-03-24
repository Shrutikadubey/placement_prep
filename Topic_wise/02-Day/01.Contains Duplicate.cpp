//problem-Contains Duplicate
// Pattern: Hashing
// Idea: Set use → duplicate detect
// Trick: “duplicate” keyword

//example-Example 1:

// Input: nums = [1,2,3,1]
// Output: true
// Explanation:
// The element 1 occurs at the indices 0 and 3.

//code-
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_set <int> s;
       for (int x:nums){
        if(s.count(x)) return true;
        s.insert(x);

       }
       return false; 
    }
};
