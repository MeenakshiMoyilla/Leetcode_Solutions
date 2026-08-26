class Solution 
{
    public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            auto it=map.find(nums[i]);
            if(it!=map.end())   map[nums[i]]++;
            else                map[nums[i]]=1;
            if(map[nums[i]]>nums.size()/2) return nums[i];
        }   
        return 0;
    }
};