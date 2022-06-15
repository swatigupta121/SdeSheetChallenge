class Solution {
public:
    double myPow(double x, int n) {
        /*
        O(n),O(1)
        double ans=1.0;
        long long nn=n;
        if(nn<0)    nn=nn*(-1);
        
        for(int i=1;i<=nn;i++)
        {
            ans*=x;
        }
        if(n<0)
            ans=1/ans;
        return ans;
        */
        
        double ans=1.0;
        long long nn=n;
        if(nn<0)    nn=nn*(-1);
        while(nn>0)
        {
            if(nn%2==1)
            {
                ans=ans*x;//8
                nn=nn-1;//4
            }
            else
            {
                x=x*x;//4
                nn=nn/2;//5
            }
        }
        if(n<0) ans=1/ans;
        return ans;
        //O(logn)
        //return pow(x,n);
    }
};
