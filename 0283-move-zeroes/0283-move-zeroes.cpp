class Solution {
public:
    void moveZeroes(vector<int> &nums)
{
  int zeroCount = 0;
  int i = 0;
  for (i=0; i < nums.size(); i++)
  {
    if (nums[i] == 0)
      zeroCount++;
  }
  int pos = 0;
  for (int res : nums)
  {
    if (res != 0)
      nums[pos++] = res;
  }
  for (pos=pos; pos < nums.size(); pos++)
  {
    nums[pos] = 0;
  }
}
};