class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //O(n), O(1)
        // int cnt=1,last=nums[0];
        // if(nums.size()==1)
        //     return nums[0];
        // for(int i=1;i<nums.size();i++)
        // {
        //     if(nums[i]==last)
        //         cnt++;
        //     else
        //     {
        //         if(cnt==1)
        //             return last;
        //         else
        //             cnt=1;
        //     }
        //     last=nums[i];
        // }
        // if(cnt==1)
        //     return nums[nums.size()-1];
        // return -1;
        
        //O(n)
        // int ele=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     ele=ele^nums[i];
        // }
        // return ele;
        
        //O(log n), O(1)
        int low=0,high=nums.size()-2;
        int mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(nums[mid]==nums[mid^1])
                low=mid+1;
            else
                high=mid-1;
        }
        return nums[low];
    }
};
