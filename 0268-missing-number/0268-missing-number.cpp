class Solution {
public:
   int missingNumber(vector<int> &nums)
{
  // sum of all elments of array
  int arraySum = 0;
  int n = nums.size();
  int rangeSum = 0;
  // sum of elements in range [0,n]
  rangeSum = n * (n + 1) / 2;
  // calculating sum of array elements
  for (int i = 0; i < n; i++)
  {
    arraySum += nums[i];
  }
  // difference of rangeSum and arraySum is missing number
  int missingNumber = rangeSum - arraySum;
  return missingNumber;
}
};