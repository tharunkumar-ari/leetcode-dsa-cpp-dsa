class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
       deque<int>maxdq;
       deque<int>mindq;
       int n=nums.size();
       int i=0;
       int longest=0;
       for(int j=0;j<n;j++){
         while(!maxdq.empty()&&nums[maxdq.back()]<nums[j]){
            maxdq.pop_back();
         }
         maxdq.push_back(j);

         while(!mindq.empty()&& nums[mindq.back()]>nums[j]){
            mindq.pop_back();
         }
         mindq.push_back(j);

         while(nums[maxdq.front()]-nums[mindq.front()]>limit){
            if(maxdq.front()==i){
                maxdq.pop_front();
            }
             if(mindq.front()==i){
                mindq.pop_front();
            }
            i++;
         }
         int length=j-i+1;
         longest=max(longest,length);
       }
       return longest;
    }
};