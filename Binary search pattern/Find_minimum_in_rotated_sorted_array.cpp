//in this code we find the minimum element in a rotated sorted array
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] > nums[right]) {
                left = mid + 1; // Minimum is in the right half
            } else {
                right = mid; // Minimum is in the left half
            }
        }
        return nums[left]; // At the end, left will point to the minimum element
    }
};