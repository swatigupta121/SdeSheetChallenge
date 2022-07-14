class Solution
{
public:
    void solve(int ind, vector < int > & arr, int n, vector < int > & ans, int sum) 
    {
        if (ind == n) 
        {
            ans.push_back(sum);
            return;
        }
        //element is picked
        solve(ind + 1, arr, n, ans, sum + arr[ind]);
        //element is not picked
        solve(ind + 1, arr, n, ans, sum);
    }
    vector<int> subsetSums(vector<int> arr, int n)
    {
        // Write Your Code here
        // vector<int> ans;
        // int sum=0;
        // ans.push_back(sum);
        // for(int i=0;i<N;i++)
        // {
        //     sum=0;
        //     // ans.push_back(sum);
        //     // sum=arr[i];
        //     for(int j=i;j<N;j++)
        //     {
        //         sum=sum+arr[j];
        //         ans.push_back(sum);
        //     }
        // }
        // return ans;
        vector < int > ans;
        solve(0, arr, n, ans, 0);
        return ans;
    }
};
