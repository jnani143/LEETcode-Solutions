/*
Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).

Constraints:

1 <= nums.length <= 3 * 104
-100 <= nums[i] <= 100
nums is sorted in non-decreasing order.
  */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int curr=0;
        for(int i=1;i<nums.size();i++)
        {
            if (nums[curr] !=nums[i])
            {
                nums[++curr]=nums[i];
            }                               
       }
       return curr+1;
    }
};
