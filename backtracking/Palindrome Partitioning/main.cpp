class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<string> res;
        f(s, 0, res);
        return big;
    }
private:
    vector<vector<string>> big;

    void f(string s, int index, vector<string> res) {
        if (index == s.length()) {
            big.push_back(res);
            return;
        }

        string temp = "";
        while (index < s.length()) {
            temp += s[index];
            if (palindrome(temp)) {
                res.push_back(temp);
                f(s, index+1, res);
                res.pop_back();
            }
            index++;
        }
    }

    bool palindrome(string s) {
        int left = 0, right = s.length()-1;
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }

        return true;
    }
};
