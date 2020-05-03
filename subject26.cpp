class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         if(nums.empty()) return {-1,-1};

        int left=0;
        int right=nums.size()-1;
        while(left<right){
            int mid=(left+right)/2;
            if(nums[mid]>=target){      //确定左边界
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        if(nums[left]!=target) return {-1,-1};
        int start=left;

        left=0;
        right=nums.size()-1;
        while(left<right){
            int mid=(left+right+1)/2;
            if(nums[mid]<=target){      //确定右边界
                left=mid;
            }
            else{
                right=mid-1;
            }
        }
        if(nums[left]!=target) return {-1,-1};
        int end=right;
        
        return {start,end};
    }
};
