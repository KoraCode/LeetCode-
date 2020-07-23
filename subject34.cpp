先遍历strs，对每个string进行排序，异位词的排序结果是一样的，在map中的key值也就一样，
然后在map中添加对应的vector，再将vector逐个添加到res中代码


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map <string,vector<string> > m;
        for(string& s : strs)
        {
            string t = s;
            sort(t.begin(),t.end());
            m[t].push_back(s);   //t为单词的按顺序排列，作为key值，m[t]则为该单词的异位词构成的vector，作为value值
        }
        for(auto& n : m)                //n为键和值组成的pair
            res.push_back(n.second);
        return res;
    }
};
