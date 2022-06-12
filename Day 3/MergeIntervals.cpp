class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //O(nlogn + n^2), O(n)
        // int s,e;
        // vector<vector<int>> res;
        // sort(intervals.begin(),intervals.end());
        // for(int i=0;i<intervals.size();i++)
        // {
        //     s=intervals[i][0];
        //     e=intervals[i][1];
        //     if(!res.empty())
        //     {
        //         if(res[res.size()-1][1]>=e)
        //             continue;
        //     }
        //     for(int j=i+1;j<intervals.size();j++)
        //     {
        //         if(intervals[j][0]<=e)
        //         {
        //             e=max(intervals[j][1],e);
        //         }
        //         else
        //             break;
        //     }
        //     vector<int> a;
        //     a.push_back(s);
        //     a.push_back(e);
        //     res.push_back(a);
        // }
        // return res;
        
        //O(nlogn+n), O(n)        
        int s,e;
        vector<vector<int>> res;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size();i++)
        {
            s=intervals[i][0];
            e=intervals[i][1];
            if(res.empty())
            {
                res.push_back(intervals[i]);
            }
            // cout << res.size();
            if(res[res.size()-1][1]>=s)
            {
                e=max(intervals[i][1],res[res.size()-1][1]);
                res[res.size()-1][1]=e;
            }
            else
            {
                res.push_back(intervals[i]);
            }
        }
        return res;
    }
};
