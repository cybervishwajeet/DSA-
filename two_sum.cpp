// this code is for the problem of two sum, which is to find two numbers in an array that add up to a target value
#include <iostream> 
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int i = 0;
       int j = nums.size() - 1;
         while (i < j) {
              int sum = nums[i] + nums[j];
              if (sum == target) {
                return {i, j};
              } else if (sum < target) {
                i++;
              } else {
                j--;
              }
         }
        return {};
         
    }
};

