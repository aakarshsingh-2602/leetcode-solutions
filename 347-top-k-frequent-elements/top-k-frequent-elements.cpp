class Solution {
public:
    vector<int> topKFrequent(std::vector<int>& nums, int k) {
        unordered_map<int, int> freqMap;
        for (int num : nums) {
            freqMap[num]++;
        }

        std::vector<std::vector<int>> buckets(nums.size() + 1);
        for (const auto& [val, count] : freqMap) {
            buckets[count].push_back(val);
        }

        std::vector<int> result;
        result.reserve(k);

        for (int i = buckets.size() - 1; i > 0 && result.size() < k; --i) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) {
                    return result;
                }
            }
        }

        return result;
    }
};