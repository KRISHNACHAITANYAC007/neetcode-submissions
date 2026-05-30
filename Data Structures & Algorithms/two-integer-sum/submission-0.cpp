class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>num;

        for(int i=0;i<nums.size();i++)
        {
            int c = target - nums[i];
            for(int j=0;j<nums.size();j++)
            {
                if(i!=j&&nums[j]==c)
                {
                    num.push_back(i);
                    num.push_back(j);
                    return num;
                }
            }
        }
        return num;
    }
};
