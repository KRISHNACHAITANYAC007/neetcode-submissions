class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        map<int,int>m;
        map<int,int>n;

        for(int k:s) m[k]++;
        for(int c:t) n[c]++;

        for(auto const& [key, val] : m)
        {
            if(m[key] != n[key]) {
                return false;
            }
        }
        return true;
    }

};