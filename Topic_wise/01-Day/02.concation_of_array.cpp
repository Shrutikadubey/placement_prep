//problem-Concatenation of Array
//pattern-basic Traversal

//approach-use modulo or copy elemnt twice


// Example 1:

// Input: nums = [1,2,1]
// Output: [1,2,1,1,2,1]
// Explanation: The array ans is formed as follows:
// - ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
// - ans = [1,2,1,1,2,1]

//code-
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector <int> ans (2*n);

        for (int i=0;i<n;i++){
            ans[i]=nums[i];  //copy1
            ans[i+n]=nums[i];  //copy 2
        }
        return ans;
    }
};