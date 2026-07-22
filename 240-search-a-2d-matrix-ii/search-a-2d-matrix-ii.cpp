class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int column = matrix[0].size();
        int size = row*column;

    for(int i = 0; i < row; i++){
        int s=0;
        int e = column-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(matrix[i][mid]==target){
                return true;
            }
            else if (matrix[i][mid]>target){
                 e = mid-1;
            }
            else s = mid+1;
        }
         }
        return false;
        
    }
};