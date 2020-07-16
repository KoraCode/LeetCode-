class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        findAns(candidates, target, 0);
        return ansSet;
    }
private:
    // 需要的参数尽量放在函数中
    void findAns(vector<int>& candidates, int target, int startIndex)
    {
        //结束条件
        if(target == 0) {
            ansSet.push_back(oneAns);
            return;
        }
        //减枝
        if(target < 0) return;
        
        // i从startIndex，传入可以避免更深层的节点使用其父节点及其父节点之上的值(总的来说就是之前用过的值)，避免答案重复
        for(int i = startIndex; i < candidates.size(); ++i) {
            oneAns.push_back(candidates[i]);
            // 得到一个加法因子后，target值要变小
            findAns(candidates, target-candidates[i], i);
            //撤销操作，以免上次结果影响下次的搜索结果
            oneAns.pop_back();
        }
    }
    
    vector<vector<int>> ansSet;
    vector<int> oneAns;
};
