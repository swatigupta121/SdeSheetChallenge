class Solution {
public:
    int search(vector<int>& nums, int target) {
        //O(n), O(1)
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]==target)
        //         return i;
        // }
        // return -1;
        
        //O(log n), O(1)
        int low=0,high=nums.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(target==nums[mid])
                return mid;
            if(nums[low]<=nums[mid])
            {
                if(target>=nums[low] && target<=nums[mid])
                    high=mid-1;
                else
                    low=mid+1;
            }
            else
            {
                if(target<=nums[high] && target>=nums[mid])
                    low=mid+1;
                else
                    high=mid-1;
            }
        }
        return -1;
    }
};
