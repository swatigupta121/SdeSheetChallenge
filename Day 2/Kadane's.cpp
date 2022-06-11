class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long int sum=0,Max=INT_MIN;
        if(nums.size()==1)
            return nums[0];
        for(long int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            Max=max(Max,sum);
            if(sum<0)
                sum=0;
        }
        return Max;
    }
};
