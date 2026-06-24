class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())  return false;

        map <int , int> m;
        map <int , int > n;

        for(int k :s) m[k]++;
        for(int j: t) n[j]++;

            return m ==n;
    }
};
