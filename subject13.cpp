class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int vecSize=int(nums.size()); 
        if(vecSize<=2)  //一开始条件判断
        {
            return result;
        }
        int possibleSize =vecSize-2;
        sort(nums.begin(),nums.end());  //容器内元素重排序

        for(int index=0;index<possibleSize;index++)
        {
            int intNow=nums[index];
            if(intNow>0)    //判断只要要判断的元素到了正数跳出循环
                break;
            int negtiveNow=0-intNow;
            int lo=index+1;     //左指针数值
            int li=vecSize-1;   //有指针数值
            while(lo<li)        //双指针不交叉就继续判断
            {
                int intlo=nums[lo];
                int intli=nums[li];
                if(intlo+intli==negtiveNow)
                {
                    vector<int> tmpVec{intNow,intlo,intli};
                    result.push_back(tmpVec);
                    while(lo<li&&nums[lo]==intlo)   //去重
                        lo++;
                    while(lo<li&&nums[li]==intli)
                        li--;
                }
                else if(intlo+intli<negtiveNow)
                {
                    lo++;
                }
                else if(intlo+intli>negtiveNow)
                {
                    li--;
                }
            }
            while(index+1<possibleSize&&nums[index]==nums[index+1])   //去重
                index++;
        }
        return result;
    }
};
