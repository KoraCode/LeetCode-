class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size();i++) {
            int st=i+1, ed=nums.size()-1;
            while(st<ed) {
                int sum=nums[st]+nums[ed]+nums[i];
                if(abs(target-sum)<abs(target-ans)) ans = sum;
                if(sum == target) return ans;
                else if(sum < target) st++;
                else ed--;
            }
        }
        return ans;
    }
};
