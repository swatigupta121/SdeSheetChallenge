class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int> mp;
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(target-nums[i])!=mp.end())   //O(log n) [for unordered map find it will be O(1)]
            {
                res.push_back(mp[target-nums[i]]);
                res.push_back(i);   // O(1) for vector push_back
                break;
            }
            mp[nums[i]]=i;
        }
        return res;
    }
};
