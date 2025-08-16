class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> res;
        sort(candidates.begin(), candidates.end());
        f(0, candidates, 0, target, res);
        return big;        
    }
private:
    vector<vector<int>> big;
    void f(int index, vector<int>& nums, int sum, int target, vector<int>& res) {
        if (sum==target) {
            big.push_back(res);
            return;
        }

        if (sum > target || index==nums.size()) {
            return;
        }

        res.push_back(nums[index]);
        f(index+1, nums, sum+nums[index], target, res);
        res.pop_back();

        while (index+1<nums.size() && nums[index]==nums[index+1]) {
            index++;
        }

        f(index+1, nums, sum, target, res);
    }
};
