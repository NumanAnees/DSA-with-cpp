class Solution {
public:
    int leftIndex(vector<int> nums, int target){
        int start = 0;
        int end = nums.size()-1;
        int mid = start + (end-start)/2;
        int result=-1;
        while(start <= end) {

        if(nums[mid] == target) {
            result= mid;
            end = mid-1;
        }
        else if(target > nums[mid]) {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    return result;    
    }
    //Right Index
    int rightIndex(vector<int> nums, int target){
        int start = 0;
        int end = nums.size()-1;
        int mid = (end+start)/2;
        int result=-1;
        while(start <= end) {

        if(nums[mid] == target) {
            result= mid;
            start = mid+1;
        }
       else if(target > nums[mid]) {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    return result;    
    }
    int searchRange(vector<int>& nums, int target) {
        int LeftMost = leftIndex(nums,target);
        int RightMost = rightIndex(nums,target);
        int totalOccurances = (RightMost-LeftMost)+1;
        return totalOccurances;

    }
};