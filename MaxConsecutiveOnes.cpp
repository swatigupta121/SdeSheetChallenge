class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        /*int count=0,max=0;
        for(int i=0;i<nums.size();i++)
        {
            count=0;
            if(nums[i]==1)
            {
                count++;
                for(int j=i+1;j<nums.size();j++)
                {
                    if(nums[j]==1)
                    {
                        count++;    
                        i=j;   
                    }
                    else
                        break;
                }
                if(max<=count)
                    max=count;
            }
        }
        return max;*/
        int count=0,ans=0;  //o(n)
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                count=0;
            else
            {
                count++;
            }
            ans=max(count,ans);
        }
        return ans;
    }
};
