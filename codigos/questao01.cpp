#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, T;
    cin >> N >> T;

    vector<int> dp(T + 1, 0);

    for (int i = 0; i < N; i++) {
        int C, V;
        cin >> C >> V;
        
        for (int j = C; j <= T; j++) {
            dp[j] = max(dp[j], dp[j - C] + V);
        }
    }

    cout << dp[T] << endl;
    return 0;
}