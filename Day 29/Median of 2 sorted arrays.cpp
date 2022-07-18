class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        //O(n) + O(nlogn)
        // for(int i=0;i<nums2.size();i++)
        // {
        //     nums1.push_back(nums2[i]);
        // }
        // sort(nums1.begin(),nums1.end());
        // if(nums1.size()%2!=0)
        //     return nums1[nums1.size()/2];
        // int s=nums1.size()/2;
        // return (nums1[s]+nums1[s-1])/2.0;
        
        //O(n1+n2), O(n1+n2)
        // vector<int> a;
        // int p1=0,p2=0;
        // while(p1<nums1.size() && p2<nums2.size())
        // {
        //     if(nums1[p1]<nums2[p2])
        //     {
        //         a.push_back(nums1[p1]);
        //         p1++;
        //     }
        //     else
        //     {
        //         a.push_back(nums2[p2]);
        //         p2++;
        //     }
        // }
        // while(p1<nums1.size())
        // {
        //     a.push_back(nums1[p1]);
        //     p1++;
        // }
        // while(p2<nums2.size())
        // {
        //     a.push_back(nums2[p2]);
        //     p2++;
        // }
        // if(a.size()%2!=0)
        //     return a[a.size()/2];
        // int s=a.size()/2;
        // return (a[s]+a[s-1])/2.0;
        
        //O(n1+n2), O(1)
        // int p1=0,p2=0,c=-1;
        // int total=nums1.size()+nums2.size();
        // int req1=0,req2=-1;
        // double ans=0;
        // if(total%2!=0)
        //     req1=(total-1)/2;
        // else
        // {
        //     req1=(total-1)/2;
        //     req2=req1+1;
        // }
        // while(p1<nums1.size() && p2<nums2.size())
        // {
        //     if(nums1[p1]<nums2[p2])
        //     {
        //         // a.push_back(nums1[p1]);
        //         c++;
        //         if(c==req1)
        //             ans=nums1[p1];
        //         if(c==req2)
        //             ans+=nums1[p1];
        //         p1++;
        //     }
        //     else
        //     {
        //         // a.push_back(nums2[p2]);
        //         c++;
        //         if(c==req1)
        //             ans=nums2[p2];
        //         if(c==req2)
        //             ans+=nums2[p2];
        //         p2++;
        //     }
        // }
        // while(p1<nums1.size())
        // {
        //     c++;
        //     if(c==req1)
        //         ans=nums1[p1];
        //     if(c==req2)
        //         ans+=nums1[p1];
        //     p1++;
        // }
        // while(p2<nums2.size())
        // {
        //     c++;
        //     if(c==req1)
        //         ans=nums2[p2];
        //     if(c==req2)
        //         ans+=nums2[p2];
        //     p2++;
        // }
        // if(req2==-1)
        //     return ans;
        // return ans/2;
        
        //O(log n)
        int m=nums1.size(), n=nums2.size();
        if(m>n)
            return findMedianSortedArrays(nums2,nums1);
        
        int low=0,high=m,median_pos=(m+n+1)/2;
        while(low<=high)
        {
            int cut1=(low+high)/2;
            int cut2=median_pos-cut1;
            
            int l1=(cut1==0) ? INT_MIN : nums1[cut1-1];
            int l2=(cut2==0) ? INT_MIN : nums2[cut2-1];
            
            int r1=(cut1==m) ? INT_MAX : nums1[cut1];
            int r2=(cut2==n) ? INT_MAX : nums2[cut2];
            
            if(l1<=r2 && l2<=r1)
            {
                if((n+m)%2==0)
                    return (max(l1,l2)+min(r1,r2))/2.0;
                else
                    return max(l1,l2);
            }
            else if(l1>r2)
            {
                high=cut1-1;
            }
            else
            {
                low=cut1+1;
            }
        }
        return 0.0;
    }
};
