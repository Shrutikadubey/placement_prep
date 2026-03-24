//problem-Single Number
//pattern-basic Traversal

//approach-xor operation use kr rhe h


//Example 1:
//Input: nums = [2,2,1]
//Output: 1

//code-
class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int ans=0;
       for(int i=0;i<nums.size();i++){
        ans=ans^nums[i];
       } 
       return ans;
    }
};