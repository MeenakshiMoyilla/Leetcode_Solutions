class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,right=height.size()-1,mini=INT_MAX,maxi=1,current=0;
        while(left<right && right<height.size())
        {
            mini=min(height[left],height[right]);
            current=mini*(right-left);
            maxi=max(current,maxi);
            if(height[left]<height[right])
            left++;
            else        right--;
        }
        return maxi;
    }
};