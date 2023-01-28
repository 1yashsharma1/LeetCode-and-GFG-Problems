class Solution {
public:
void rotate(vector<int> &nums, int k)
{
  // temp vector to store the rotated array
  vector<int> temp(nums.size());
  // putting k in range [0,nums.size()]
  int rot = k % nums.size();
  // calculating the index from which we have to copy the nums array
  int ptr = nums.size() - rot;
  int pos = 0;
  // copying nums in the temp array
  for (int i = ptr; i < nums.size(); i++)
  {
    temp[pos++] = nums[i];
  }
  // since the next half of nums is copied, it is time to copy the
  // previous half of the array
  for (int i = 0; i < ptr; i++)
  {
    temp[pos++] = nums[i];
  }
  // copying the temp to original array
  nums = temp;
  temp.clear();
}
};