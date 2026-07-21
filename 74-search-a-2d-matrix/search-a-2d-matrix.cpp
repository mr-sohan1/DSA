class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rowSize = matrix.size();
    int colsize = matrix[0].size();
    int size = rowSize*colsize;
    int s =0 ;
    int e = size-1 ;
    while(s<=e){
     int mid = s+(e-s)/2;
     int rowIndex = mid / colsize ;
     int colIndex = mid % colsize ;
     if(matrix[rowIndex][colIndex]==target){
        return true ;
     }
        else if(matrix[rowIndex][colIndex]>target){
            e = mid -1 ;
        }
        else s = mid +1;
    }
    return false;
        
    }
};