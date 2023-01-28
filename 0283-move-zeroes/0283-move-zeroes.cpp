class Solution {
public:
void moveZeroes(vector<int> &nums)
{
  int pos = 0;
  for (int res : nums)
  {
    if (res != 0)
      nums[pos++] = res;
  }
  for (pos; pos < nums.size(); pos++)
  {
    nums[pos] = 0;
  }
}
};