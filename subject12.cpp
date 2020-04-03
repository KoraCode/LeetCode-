class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)          return "";

        for(int i=0;i<strs[0].size();i++)     //将第一个string的第一个字母跟另外string元素的第一个字母开始比较，然后开始遍历
            for(int j=1;j<strs.size();j++)    //不会脱轨，因为C++的字符串最后一个字符是空字符
                 if(strs[j][i]!=strs[0][i])           
                    return strs[0].substr(0,i);        
                    //substr取前i个元素，因为终止循环的索引i对应的是第i+1个元素不是共有的,所以前i个元素是共有前缀
        return strs[0];
    }
};
