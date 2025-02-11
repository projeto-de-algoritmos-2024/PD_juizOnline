#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int atual = 0;
        int anterior = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            int aux = atual;
            atual = max(atual, anterior + nums[i]);
            anterior = aux;
        }
        
        return atual;
    }
};