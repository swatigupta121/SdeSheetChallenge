class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /*
        TLE
        O(n^2), O(1)
        int no=nums.size()/2,count=0;
        //cout << no;
        for(int i=0;i<nums.size();i++)
        {
            count=1;
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]==nums[i])
                    count++;
            }
            if(count>no)
                return nums[i];
        }
        return 0;*/
        
        //O(nlogn), O(n)
        // int no=nums.size()/2;
        // unordered_map<int,int> m;
        // for(int i=0;i<nums.size();i++)
        // {
        //     m[nums[i]]++;
        //     if(m[nums[i]]>no)
        //         return nums[i];
        // }
        // return 0;
        
        //Moore Voting Algorithm
        int ele=0,count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)
                ele=nums[i];
            if(nums[i]==ele)
                count++;
            else
                count--;
        }
        return ele;
    }
};
