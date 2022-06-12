class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        /*
        O(nlogn), O(1)
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
                return nums[i];
        }
        return 0;*/
        
        /*
        O(n), O(n)
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto val:m)
        {
            if(val.second>=2)
                return val.first;
        }
        return 0;*/
        
        //O(n), O(1)
        int fast=nums[0],slow=nums[0];
        do
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(fast!=slow);
        fast=nums[0];
        while(slow!=fast)
        {
            fast=nums[fast];
            slow=nums[slow];
        }
        return slow;
        
        
            
    }
};
