class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> table(128, -1);
        int left = -1, right, maxlen = 0;
        for (right = 0; right < s.size(); right++) {
            if (table[s[right]] == -1 || left > table[s[right]]) {
                table[s[right]] = right;
            } else {
                maxlen = max(maxlen, right-left-1);
                left = table[s[right]];
                table[s[right]] = right;
            }
        }
        return max(maxlen, right-left-1);   //因为求的是子串因此要减1
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> m(128,0);       //创建一个vector用于记录相关数据的最后的位置
        int i=0;
        int ans=0;
        for(int j=0;j<s.size();j++)
        {
            i=max(i,m[s[j]]);           //每次比较当前指针的数据是否重复出现，如果重复就改变当前的指针位置
            m[s[j]]=j+1;                //保存当前数据的下一个位置
            ans=max(ans,j-i+1);         
        }
        return ans;
    }
};
