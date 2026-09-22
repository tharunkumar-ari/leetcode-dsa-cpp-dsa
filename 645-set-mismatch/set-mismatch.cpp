class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       int n=nums.size();
       vector<int>count(n+1,0);
       for(int x:nums){
        count[x]++;
       }
       int twice=-1;
       int mis=-1;
       for(int i=1;i<=n;i++){
        if(count[i]==2){
            twice=i;
        }
        if(count[i]==0){
            mis=i;
        }
       }
       return{twice,mis};
    }
};