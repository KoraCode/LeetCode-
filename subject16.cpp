class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        int numsSize=nums.size();
        if(numsSize<4)
            return result;
        sort(nums.begin(),nums.end());

        for(int i=0;i<numsSize-3;i++)
        {
            for(int j=i+1;j<numsSize-2;j++)
            {
                int st=j+1;
                int ed=numsSize-1;
                while(st<ed)
                {
                    int intst=nums[st];
                    int inted=nums[ed];
                    int sum=nums[i]+nums[j]+nums[st]+nums[ed];
                    if(sum==target)
                    {
                        vector<int> tmpVec{nums[i],nums[j],nums[st],nums[ed]};
                        result.push_back(tmpVec);
                        while(st<ed&&nums[st]==intst)
                            st++;
                        while(st<ed&&nums[ed]==inted)
                            ed--;
                    }
                    else if(sum<target)
                    {
                        st++;
                    }
                    else if(sum>target)
                    {
                        ed--;
                    }
                }
                while(j<numsSize-2&&nums[j]==nums[j+1])
                    j++;
            }
            while(i<numsSize-3&&nums[i]==nums[i+1])
                    i++;
        }
        return result;
    }
};
