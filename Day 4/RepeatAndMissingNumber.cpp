pair<int,int> missingAndRepeating(vector<int> &nums, int n)
{
	// Write your code here 
    pair<int,int> res;
	int sum=0;
    for(int i=0;i<nums.size();i++)
    {
        sum+=nums[i];
    }
//     int n=nums.size();
    int n_sum=n*(n+1)/2;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n - 1; i++) 
    {
        if (nums[i] == nums[i + 1]) 
        {
            res.second=nums[i];
        }
    }
    res.first=n_sum-(sum-res.second);
    return res;
}
