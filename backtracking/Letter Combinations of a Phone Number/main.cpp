class Solution {
public:
    vector<string> letterCombinations(string digits) {
        backTracking(digits, 0, "");
        return res;
    }
private:
    vector<string> res;
    vector<string> mapping = {
        "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    void backTracking(string digits, int index, string s) {
        if (index == digits.length()) {
            if (s.length()) res.push_back(s);
            return;
        }

        for (char c: mapping[digits[index]-'0']) {
            backTracking(digits, index+1, s+c);
        }
    }
};
