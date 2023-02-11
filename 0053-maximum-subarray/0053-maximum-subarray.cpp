class Solution {
public:
  int maxSubArray(vector<int> &nums)
{
  int max_till_here = 0, max = INT_MIN;
  for (int i = 0; i < nums.size(); i++)
  {
    max_till_here = max_till_here + nums[i];

    if (max < max_till_here)
      max = max_till_here;

    if (max_till_here < 0)
      max_till_here = 0;
  }
  return max;
}
};