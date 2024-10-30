class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prime(n, true);
        int count = 0;
        for (int i = 2; i * i < n; i++) {
            if (prime[i] == true) {
                for (int j = i * i; j < n; j += i) {
                    prime[j] = false;
                }
            }
        }
        for (int i = 2; i < n; i++) {
            if (prime[i]) count++;
        }
        return count;
    }
};