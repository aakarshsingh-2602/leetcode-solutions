

class Solution {
private:
    int getDigitSum(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

public:
    int maximumSum(std::vector<int>& nums) {
        vector<int> maxVal(91, -1);
        int ans = -1;

        for (int x : nums) {
            int dSum = getDigitSum(x);
            if (maxVal[dSum] != -1) {
                ans = std::max(ans, maxVal[dSum] + x);
            }
            maxVal[dSum] = std::max(maxVal[dSum], x);
        }

        return ans;
    }
};