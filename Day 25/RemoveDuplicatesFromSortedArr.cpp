class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /*int i=0;
        if(nums.size()>1)
        {
            for(i=0;i<nums.size();i++)
            {
                for(int j=1;j<nums.size();j++)
                {
                    if(nums[i]!=nums[j])
                    {
                        nums[++i]=nums[j];
                    }
                }
                break;
            }
        }
        else if(nums.size()==1)
            return 1;
        else if(nums.size()==0)
            return 0;
        return i+1;*/
        int i=0,j=1,k=0;
        if(nums.size()==1)
            return 1;
        while(i<nums.size() && j<nums.size())
        {
            if(nums[i]==nums[j])
                j++;
            else
            {
                nums[++i]=nums[j];
            }
             k=i+1;
        }
        return k;
    }
};
