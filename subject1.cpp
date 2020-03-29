class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> record;
        vector<int> result;
        for(int i=0;i<nums.size();i++)
        {
            int tmp=target-nums[i];
            if(record.find(tmp)!=record.end())      //find算法返回目标的迭代器，如果没找到返回一个end()
            {
                result.push_back(record[tmp]);
                result.push_back(i);
                return result;
            }else {
                record[nums[i]]=i;
            }
        }
        return result;
    }
};
