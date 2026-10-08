class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int u = 0;
        int d = matrix.size()-1;
        int m;
        int row;

        while(u<=d){
            m = (u+d)/2;
            if(matrix[m][0] < target){
                row = u;
                u = m+1;
            }else if(matrix[m][0] > target){
                row = u-1;
                d = m-1;
            }else{
                return true;
            }
        }


        int l = 0;
        if (row < 0 || row > matrix[row].size()-1 ) return false;
        int r = matrix[row].size()-1;
        while(l<=r){
            m = (l+r)/2;
            if(matrix[row][m] < target){
                l = m+1;
            }else if(matrix[row][m] > target){
                r = m-1;
            }else{
                return true;
            }
        }
        return false;
    }
};
