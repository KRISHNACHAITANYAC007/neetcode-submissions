class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<int,int>m,n;
        for(char a:s)  m[a]++;
        for(char b:t)  n[b]++;

        if(m==n) return true;

        return false;
    }
};
