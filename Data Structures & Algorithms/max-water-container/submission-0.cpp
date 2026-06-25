class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l =0;
        int r = heights.size()-1;
        int maxi =0 ;

        while(l<r)
        {
            int  area = (r - l) * min(heights[l], heights[r]);
            maxi = max(maxi,area);

            if(heights[l]>heights[r]) r--;
            else if (heights[l]<=heights[r]) l++;
        }
        return maxi;
    }
};
