class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> res;
        f(0, nums, res);
        return big;
    }
private:
    vector<vector<int>> big;
    void f(int index, vector<int>& nums, vector<int>& res) {
        if (index==nums.size()) {
            big.push_back(res);
            return;
        }

        res.push_back(nums[index]);
        f(index+1, nums, res);
        res.pop_back();
        while (index+1<nums.size() && nums[index]==nums[index+1]) {
            index++;
        }
        f(index+1, nums, res);
        return;
    }
};
