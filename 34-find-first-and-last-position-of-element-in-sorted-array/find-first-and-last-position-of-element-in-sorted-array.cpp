class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first = -1, last = -1;
        
        // Loop 1: Find first index
        int i = 0, j = n - 1;
        while (i <= j) {
            int mid = i + (j - i) / 2;
            if (nums[mid] == target) {
                first = mid;
                j = mid - 1; // Move left to find earlier occurrences
            } else if (nums[mid] < target) {
                i = mid + 1;
            } else {
                j = mid - 1;
            }
        }
        
        // If target was never found, return early
        if (first == -1) {
            return {-1, -1};
        }
        
        // Loop 2: Find last index
        i = first;
        j = n - 1;
        while (i <= j) {
            int mid = i + (j - i) / 2;
            if (nums[mid] == target) {
                last = mid;
                i = mid + 1; // Move right to find later occurrences
            } else if (nums[mid] < target) {
                i = mid + 1;
            } else {
                j = mid - 1;
            }
        }
        
        return {first, last};
    }
};