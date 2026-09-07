#include <vector>

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        // isComposite[i] tracks whether (2*i + 1) is composite
        // Size represents odd numbers up to n
        int numOdds = n / 2;
        std::vector<bool> isComposite(numOdds, false);

        for (int i = 1; (2 * i + 1) * (2 * i + 1) < n; i++) {
            if (!isComposite[i]) {
                int p = 2 * i + 1;
                // Start marking at p * p: index is (p * p - 1) / 2
                // Step size in odd index space is p (since (p + 2k)*p increases by 2*p in actual values)
                for (long long j = 1LL * (2 * i + 1) * (2 * i + 1) / 2; j < numOdds; j += p) {
                    isComposite[j] = true;
                }
            }
        }

        // Count prime 2, then all unmarked odd numbers starting from 3 (index 1)
        int count = 1;
        for (int i = 1; i < numOdds; i++) {
            if (!isComposite[i]) count++;
        }

        return count;
    }
};