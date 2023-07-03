class Solution {
public:
    void tranposeMatrix(vector<vector<int>>& mat){
        int n = mat.size();
        int m = mat[0].size();

        for(int i=0 ; i<n-1 ; i++){
            for(int j=i+1 ; j<m ; j++){
                swap(mat[i][j] , mat[j][i]);
            }
        }
        
    }
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size() ;
        int m = matrix[0].size();
        // This is a optimal approach first transpose and then reverse
        tranposeMatrix(matrix);
        for(int i=0 ; i<n; i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }


    }
};