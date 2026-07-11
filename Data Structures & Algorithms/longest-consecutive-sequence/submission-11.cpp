class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return {};
        sort(nums.begin(),nums.end());
        
        int l=0;
        int maxl=0;
  
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]+1==nums[i]) l++;
            else if(nums[i-1] == nums[i]) continue;
            else l=0;

            maxl = max(l,maxl);
        }
        return maxl+1;
    }
};
