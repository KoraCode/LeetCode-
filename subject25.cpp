class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size() == 0)
        {
            return -1;
        }
        int n = nums.size() - 1;
        if (n == 0)
        {
            return nums[0] == target ? 0 : -1;
        }
        int l = 0, r = n;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            if (nums[0] <= nums[mid])
            {
                // 左半边有序
                if (nums[0] <= target && target <= nums[mid])
                {
                // target的值在左半边
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            else
            {
                // 右半边有序
                if (nums[mid] <= target && target <= nums[n])
                {
                // target的值在右半边
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }
        }
        return -1;
    }
};
