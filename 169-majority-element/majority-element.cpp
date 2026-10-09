class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;  // 3->2 / 2->1
        }
      for(auto it:mp){ 
        if(it.second > (nums.size())/2){
            return it.first ;
        }
      }
      return false;
    }
};