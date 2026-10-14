class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left = 0;
        int right = matrix.size();

        // Row bs
        while(left < right){
            int middle = left + (right-left)/2;
            if(matrix[middle][0] <= target){
                left = middle + 1;
                continue;
            }
            right = middle;
        }

        int row = left - 1;
        if (row < 0) return false;

        left = 0;
        right = matrix[0].size();
        while(left < right){
            int middle = left + (right-left)/2;
            if(matrix[row][middle] == target) return true;

            if(matrix[row][middle] < target){
                left = middle + 1;
                continue;
            }
            right = middle;
        }
        return false;
    }
};
