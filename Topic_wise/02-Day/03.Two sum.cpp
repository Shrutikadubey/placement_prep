//problem-Two sum
// Pattern: Hashing
// Idea: target - current check
// Trick: “pair + target”

//Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

//code-
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // if nums is unsorted (General case for → Use HashMap)
        unordered_map<int, int> mp; // value -> index
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            mp[nums[i]] = i;
        }
        return {};

        //If nums is sorted (Two-pointer approach is valid)
        // vector <int> ans;
        // int n=nums.size();
        // int i=0,j=n-1;
        // while(i<j){
        //     int twoSum =nums[i]+nums[j];
        //     if(twoSum>target){
        //         j--;
        //     }
        //     else if(twoSum<target){
        //             i++;
        //     }
        //     else{
        //         ans.push_back(i);
        //         ans.push_back(j);
        //         return ans;
        //     }
        // }
        // return ans; // in case no solution found
    }
    
};


