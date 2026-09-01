class Solution 
{
    public:
    bool containsDuplicate(vector<int>& nums){
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            auto it=map.find(nums[i]);
            if(it!=map.end())    return true;
            else                 map[nums[i]]=0;       
        }
        return false;
    }
};