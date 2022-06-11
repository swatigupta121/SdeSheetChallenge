class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int n=a.size(),break_p=0,pos=0;
        for(int i=n-1;i>0;i--)
        {
            if(a[i]>a[i-1])
            {
                break_p=i-1;
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]>a[break_p])
            {
                pos=i;
                break;
            }
        }
        if(break_p==0 && pos==0)
            reverse(a.begin(),a.end());
        else
        {
            swap(a[break_p],a[pos]);
            reverse(a.begin()+break_p+1,a.end());
        }
    }
};
