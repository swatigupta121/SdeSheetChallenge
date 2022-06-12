class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //O(n^2), O(n^2)
        // int n=matrix.size();
        // vector<vector<int>> adjusted(n,vector<int>(n,0));
        // for(int i=0;i<matrix.size();i++)
        // {
        //     for(int j=0;j<matrix[i].size();j++)
        //     {
        //         adjusted[j][n-i-1]=matrix[i][j];
        //     }
        // }
        // matrix=adjusted;
      
        //O(n^2),O(1)
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);    
            }
            
        }
        for(int i=0;i<matrix.size();i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
