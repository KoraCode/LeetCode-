//DFS大概模板
void dfs(int step)
{
        判断边界
        {
            相应操作
        }
        尝试每一种可能
        {
               满足check条件
               标记
               继续下一步dfs(step+1)
               恢复初始状态（回溯的时候要用到）
        }
}

//题目解答
class Solution {
public:
    vector<string> v={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> letterCombinations(string digits) {
        vector<string> ans;         //接受最终输出
        func(ans,"",digits,0);      //第二个参数“”用来作为中间保存
        return ans;
    }
    void func(vector<string>& ans,string str,string& digits,int index){
        //判断边界
        if(index>=digits.size()){
            if(str.size()>0) ans.push_back(str);
            return;
        }else{
            string s=v[digits[index]-'2'];      //判断的条件，输入字符在hash中的字符串
            for(int i=0;i<s.size();i++){
                str.push_back(s[i]);            //输入到临时中间保存
                func(ans,str,digits,index+1);   //继续下一步
                str.pop_back();                 //回溯位置
            }
        }
    }
};
