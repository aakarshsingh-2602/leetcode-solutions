

class Solution {
public:
    int subarraySum(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> prefix_counts;
        prefix_counts[0] = 1; // Base case
        
        int current_sum = 0;
        int count = 0;
        
        for (int num : nums) {
            current_sum += num;
            
            if (prefix_counts.count(current_sum - k)) {
                count += prefix_counts[current_sum - k];
            }
            
            prefix_counts[current_sum]++;
        }
        
        return count;
    }
};