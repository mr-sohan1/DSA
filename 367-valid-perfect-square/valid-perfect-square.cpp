class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 0 || num == 1){
            return true;
            }
        int s = 2;
        int e = num;
        while(s<=e){
            long long int mid = s+(e-s)/2;
            long long product = mid*mid;
            if(product == num ){
                return true;
            }
            else if(product<num){
                s = mid+1;
            }
            else e = mid-1;
        }
        return false;
    }
};