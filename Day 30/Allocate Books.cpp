bool allocate(vector<int> &A,int barrier, int b) {
    if(A[0]>barrier)
        return false;
    int stu=1,pg=0;
    for(int i=0;i<A.size();i++)
    {
        if(pg+A[i]>barrier)
        {
            stu++;
            pg=A[i];
        }
        else
        {
            pg+=A[i];
        }
    }
    return (stu<=b);
}
int Solution::books(vector<int> &A, int B) {
    int low = A[0];
    int high=0;
    for(int i=0;i<A.size();i++)
    {
        low = max(low, A[i]);
        high+=A[i];
    }
    // cout << low << " " << high;
    int ans=-1;
    if(B==1)
        return high;
    if(B>A.size())
        return ans;
    while(low<=high)
    {
        int mid= (low+high)/2;
        if(allocate(A,mid,B))
        {
            ans=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return ans;
}
