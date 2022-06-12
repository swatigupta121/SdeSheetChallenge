class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //O(nlogn + n), O(1)
        // int j=0;
        // for(int i=m;i<m+n && j<n;i++)
        // {
        //     nums1[i]=nums2[j];
        //     j++;
        // }
        // sort(nums1.begin(),nums1.end());
        
        //O(n*m), O(1)
        // if(n==0)
        //    return;
        // int j=0,i=0;
        // for(i=0;i<m;i++)
        // {
        //    if(nums1[i]>nums2[j])
        //    {
        //        swap(nums1[i],nums2[j]);
        //    }
        //    int first=nums2[0],k=0;
        //    for(k=1;k<n && nums2[k]<first;k++)
        //    {
        //        nums2[k-1]=nums2[k];
        //   }
        //    nums2[k-1]=first;
            
        // }
        // for(int x=i,j=0;x<n+m,j<n;x++,j++)
        // {
        //    nums1[x]=nums2[j];
        // }
        
        //O(n+m), O(1)
        int k=m+n-1,i=m-1,j=n-1;
        while(i>=0 && j>=0)
        {
            if(nums1[i]>nums2[j])
                nums1[k--]=nums1[i--];
            else
                nums1[k--]=nums2[j--];
        }
        while(j>=0)
        {
            nums1[k--]=nums2[j--];
        }
    }
};
