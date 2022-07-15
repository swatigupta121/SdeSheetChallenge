int Solution::findMedian(vector<vector<int> > &A) {
    // O(nlogn), O(n)
    // vector<int> a;
    // for(int i=0;i<A.size();i++)
    // {
    //     for(int j=0;j<A[i].size();j++)
    //     {
    //         a.push_back(A[i][j]);
    //     }
    // }
    // sort(a.begin(),a.end());
    // return a[a.size()/2];
  
    int min = INT_MAX, max = INT_MIN;
    for (int i=0; i<r; i++)
    {
        // Finding the minimum element
        if (m[i][0] < min)
            min = m[i][0];
 
        // Finding the maximum element
        if (m[i][c-1] > max)
            max = m[i][c-1];
    }
 
    int desired = (r * c + 1) / 2;
    while (min < max)
    {
        int mid = min + (max - min) / 2;
        int place = 0;
 
        // Find count of elements smaller than or equal to mid
        for (int i = 0; i < r; ++i)
            place += upper_bound(m[i], m[i]+c, mid) - m[i];
        if (place < desired)
            min = mid + 1;
        else
            max = mid;
    }
    return min;
}
