#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int maxSubArray(vector<int>& nums) {
  int nums_size = nums.size();
  if (nums_size < 1)
    return 0; 
  if (nums_size == 1) 
    return nums[0];
  int max_sum = nums[0];
  int window_sum = nums[0];

  // if window_sum is negative, ignore
  for (int i = 1; i < nums_size; i++) {
    if (window_sum < 0)
      window_sum = nums[i];
    else
      window_sum = window_sum + nums[i];

    max_sum = max(window_sum, max_sum);
  }
  return max_sum;
}

int main(int argc, char const *argv[]) {
  // vector<int> numbers = {-2,1,-3,4,-1,2,1,-5,4};
  // vector<int> numbers = {1};
  vector<int> numbers = {5,4,-1,7,8};
  cout << maxSubArray(numbers);
  return 0;
}
