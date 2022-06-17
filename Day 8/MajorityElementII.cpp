class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        //TLE
        //O(n^2), O(1)
        // int no=nums.size()/3,count=0;
        // vector<int> ans;
        // set<int> s;
        // //cout << no;
        // for(int i=0;i<nums.size();i++)
        // {
        //     count=1;
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         if(nums[j]==nums[i])
        //             count++;
        //     }
        //     if(count>no)
        //         s.insert(nums[i]);
        // }
        // for(auto x:s)
        // {
        //     ans.push_back(x);
        // }
        // return ans;
        
        //O(nlogn), O(n)
        // int no=nums.size()/3;
        // map<int,int> m;
        // vector<int> ans;
        // set<int> s;
        // for(int i=0;i<nums.size();i++)
        // {
        //     m[nums[i]]++;
        //     if(m[nums[i]]>no)
        //         s.insert(nums[i]);
        // }
        // for(auto x:s)
        // {
        //     ans.push_back(x);
        // }
        // return ans;
        
        int sz = nums.size();
        int num1 = -1, num2 = -1, count1 = 0, count2 = 0, i;
        for (i = 0; i < sz; i++) {
            if (nums[i] == num1)
              count1++;
            else if (nums[i] == num2)
              count2++;
            else if (count1 == 0) {
              num1 = nums[i];
              count1 = 1;
            } else if (count2 == 0) {
              num2 = nums[i];
              count2 = 1;
            } else {
              count1--;
              count2--;
            }
          }
          vector < int > ans;
          count1 = count2 = 0;
          for (i = 0; i < sz; i++) {
            if (nums[i] == num1)
              count1++;
            else if (nums[i] == num2)
              count2++;
          }
          if (count1 > sz / 3)
            ans.push_back(num1);
          if (count2 > sz / 3)
            ans.push_back(num2);
          return ans;
    }
};
