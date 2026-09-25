class Solution {
public:
    bool isIsomorphic(string s, string t) {

        unordered_map<char, char> mp;
        unordered_map<char, char> sp;

        for (int i = 0; i < s.size(); i++) {

            char a = s[i];
            char b = t[i];
            if (mp.find(a) != mp.end() && mp[a] != b) {
                return false;
            }
            if (sp.find(b) != sp.end() && sp[b] != a) {
                return false;
            }

            mp[a] = b;
            sp[b] = a;
        }

        return true;
    }
};