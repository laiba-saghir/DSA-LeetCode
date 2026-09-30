class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int n = seq.size();
        vector<int> ans(n);
        int depth=0;
        int i=0;
        for(char c:seq){
            ans[i] = (c == '(') ? ++depth %2:depth-- %2;
            i++;
        }
        return ans;


    }
};