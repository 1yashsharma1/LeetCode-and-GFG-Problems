class Solution {
public:
   int missingNumber(vector<int>& nums) {

  int n=nums.size();
  n=n*(n+1)/2;
  int sumOfVector=0;
  for(int sum:nums)
  {
    sumOfVector+=sum;
  }

  int result=n-sumOfVector;
  return result;   
  }
};