class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        unordered_set<int> visit;
        vector<int> res;
        f(nums, visit, res);
        return big;
    }
private:
    vector<vector<int>> big;
    void f(vector<int>& nums, unordered_set<int>& visit, vector<int>& res) {
        if (visit.size()==nums.size()) {
            big.push_back(res);
            return;
        }

        for (int i=0; i<nums.size(); i++) {
            if (!visit.count(nums[i])) {
                res.push_back(nums[i]);
                visit.insert(nums[i]);
                f(nums, visit, res);
                res.pop_back();
                visit.erase(nums[i]);
            }
        }
    }
};
