class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        unordered_map<char,int>sp;
        for(char x:ransomNote){
            mp[x]++;
        }
        for(int c:magazine){
            sp[c]++;
        }
        for(auto it:mp){
            char c=it.first;
            int r=it.second;
        if(sp[c]<r){
            return false;
        }
        }
        return true;
    }
};