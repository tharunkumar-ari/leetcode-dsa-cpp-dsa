class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

     unordered_map<int,int>map;
     for(int i=0;i<nums.size();i++){
        int sub=target-nums[i];

        if(map.count(sub)){    // we can use this too find(sub)!=map.end() instead of count
            return {map[sub],i};
        }
        else{
            map[nums[i]]=i;
        }
     }
        return{};
    }
};