class Solution{
	public:
	int find(int n,int m)
    {
        int count=0,ori=m;
        while(m!=1)
        {
            m=m/n;
            count++;
        }
        // cout << count << " " << pow(count,n) << " " << m << endl;
        int ch=pow(count,n);
        if(ch==ori)
            return count;
        return -1;
    }
	int NthRoot(int n, int m)
	{
	    // Code here.
	   // return find(n,m);
	   int l=1;
	    int h=m;
	    while(l<=h)
	    {
	        int mid=(l+h)/2;
	        if(pow(mid,n)==m)
	        return mid;
	        else if(pow(mid,n)>m)
	        h=mid-1;
	        else
	        l=mid+1;
	    }
	    return -1;
	}  
};
