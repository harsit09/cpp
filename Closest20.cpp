#include <vector>
#include <cstdlib> // for abs()
#include <climits> // for INT_MAX//leetcode problem 2297 closest to 0
int FindClosestNumber(vector<int>, &nums) {
int closest = INT_MAX:
for(int num: nums) {
    if(abs(nums)<abs(smallest) || (abs(num) == abs(closest) && num > closest)) {
        num = closest;
    }
}
return closest;
}
