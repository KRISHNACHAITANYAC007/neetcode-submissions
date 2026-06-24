class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>num(nums.begin(),nums.end());

        int longest = 0;

        for(int n : num )
        {
           

            if(num.find(n-1) == num.end())
            {
                int currentnum = n;
                int currentstreak = 1;
                while(num.find(currentnum+1)!=num.end()){
                currentnum +=1;
                currentstreak +=1;}
                longest = max(longest,currentstreak);
            }

            
        }
        return longest;
    }
};
