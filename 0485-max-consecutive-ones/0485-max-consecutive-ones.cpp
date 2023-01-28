class Solution {
public:
   int findMaxConsecutiveOnes(vector<int> &nums)
{
  int maxOnes = 0;
  int tempCount = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] == 1)
    {
      tempCount++;
      continue;
    }
    if (nums[i] != 1)
    {
      if (tempCount > maxOnes)
      {
        maxOnes = tempCount;
      }
      tempCount = 0;
      continue;
    }
  }
  if (tempCount > 0 && tempCount > maxOnes)
  {
    return tempCount;
  }
  return maxOnes;
}
};