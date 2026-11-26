#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int max_sum = 0;
        int left = 0;
        int right = nums.size() - 1;
        
        while (left < right) {
            max_sum = max(max_sum, nums[left] + nums[right]);
            left++;
            right--;
        }
        
        return max_sum;
    }
};