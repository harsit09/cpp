#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int eggDrop(int eggs, int floors) {
    vector<vector<int>> dp(eggs + 1, vector<int>(floors + 1, 0));

    // Fill for one egg
    for (int i = 1; i <= floors; i++) dp[1][i] = i;

    // Fill for all eggs
    for (int e = 2; e <= eggs; e++) {
        for (int f = 1; f <= floors; f++) {
            dp[e][f] = INT_MAX;
            for (int x = 1; x <= f; x++) {
                int attempts = 1 + max(dp[e - 1][x - 1], dp[e][f - x]);
                dp[e][f] = min(dp[e][f], attempts);
            }
        }
    }

    return dp[eggs][floors];
}

int main() {
    int eggs = 2, floors = 10;
    cout << "Minimum attempts: " << eggDrop(eggs, floors) << endl;
    return 0;
}
