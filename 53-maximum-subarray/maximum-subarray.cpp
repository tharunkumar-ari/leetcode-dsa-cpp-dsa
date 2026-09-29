class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int curr=nums[0];
        int Max=nums[0];
        for(int i=1;i<nums.size();i++){
            curr=max(nums[i],curr+nums[i]);
            Max=max(curr,Max);
        }
        return Max; 
    }
};