class Solution {
public:
   int singleNumber(vector<int> &nums)
{
  // initializing ans with 0
  int ans = 0;
  // xoring ans with nums array, evey number which occurs twice
  // will eventually becomes zero and we are left with only
  // unique element
  for (int i = 0; i < nums.size(); i++)
  {
    ans ^= nums[i];
  }
  // returning ans
  return ans;
}
};