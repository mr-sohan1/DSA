class Solution {
public:
   
   int firstPosition(vector<int> nums , int target){
    int n = nums.size();
    int s =0;
    int e = n-1;
    int ans =-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(nums[mid]==target){
            ans = mid;
            e = mid -1;
        }
        else if(nums[mid]>target){
            e = mid-1;
        }
        else s=mid+1;
    }
    return ans;

   }
    int lastPosition(vector<int> nums , int target){
    int n = nums.size();
    int s =0;
    int e = n-1;
    int ans =-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(nums[mid]==target){
            ans = mid;
            s = mid+1;
        }
        else if(nums[mid]>target){
            e = mid-1;
        }
        else s=mid+1;
    }
    return ans;

   }
    vector<int> searchRange(vector<int>& nums, int target) {
       int first = firstPosition(nums , target);
       int second = lastPosition(nums , target);

       vector<int>temp;
       temp.push_back(first);
       temp.push_back(second);
       return temp;

    }
};