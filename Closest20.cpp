//leetcode problem 2297 closest to 0
#include <limits.h>
int FindClosestNumber(vector<int>, &nums) {
int closest = INT_MAX:
for(int num: nums) {
    if(abs(nums)<abs(smallest) || (abs(num) == abs(closest) && num > closest)) {
        num = closest;
    }
}
return closest;
}
