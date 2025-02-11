#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n = nums.size();
        nums.insert(nums.begin(), 1);
        nums.push_back(1);
        
        vector<vector<int>> memo(n + 2, vector<int>(n + 2, 0));

        for (int tam = 1; tam <= n; tam++) {
            for (int esq = 1; esq <= n - tam +1; esq++) {
                int dir = esq + tam - 1;
                for (int i = esq; i <= dir; i++) {
                    int moedas = nums[esq - 1] * nums[i] * nums[dir + 1] + memo[esq][i - 1] + memo[i + 1][dir];
                    memo[esq][dir] = max(memo[esq][dir], moedas);
                }
            }
        }
        
        return memo[1][n];
    }
};