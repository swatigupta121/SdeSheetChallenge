class Solution {
public:
    int trap(vector<int>& a) {
        //int ans=0,left_max=INT_MIN,right_max=INT_MIN,n=a.size();
        /*for(int i=1;i<n-1;i++)
        {
            left_max=a[0];
            for(int j=1;j<i;j++)
                left_max=max(left_max,a[j]);
            right_max=a[i+1];
            for(int k=i+2;k<n;k++)
                right_max=max(right_max,a[k]);
            //cout << "leftmax,rightmax: " << left_max << right_max << endl;
            int target = min(left_max,right_max);
            if(target-a[i]>=0)
                ans+=target-a[i];
        }
        return ans;*/
        int n=a.size(),ans=0;
        int left_max[n],right_max[n];
        left_max[0]=a[0];
        for(int i=1;i<n;i++)
            left_max[i] = max(left_max[i-1],a[i]);
        right_max[n-1]=a[n-1];
        for(int j=n-2;j>=0;j--)
            right_max[j] = max(right_max[j+1],a[j]);
        for(int i=1;i<n-1;i++)
            ans = ans + min(left_max[i],right_max[i]) - a[i];
        return ans;
        /*int left=0,right=a.size()-1;
        int ans=0,left_max=a[0],right_max=a[a.size()-1];
        while(left<=right)
        {
            if(a[left]<a[right])
            {
                if(a[left]>left_max)
                    left_max=a[left];
                else
                    ans+=left_max-a[left];
                left++;
            }
            else
            {
                if(a[right]>=right_max)
                    right_max=a[right];
                else
                    ans+=right_max-a[right];
                right--;
            }
        }
        return ans;*/
    }
};
