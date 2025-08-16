class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> res;
        f(0, nums, 0, target, res);
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
        f(index, nums, sum+nums[index], target, res);
        res.pop_back();
        f(index+1, nums, sum, target, res);
    }
};
