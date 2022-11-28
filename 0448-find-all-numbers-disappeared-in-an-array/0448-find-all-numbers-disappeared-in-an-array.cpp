class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
          for(int i=0;i<nums.size();i++)
        {
          int temp=abs(nums[i]);
          if(nums[temp-1]>0)
          {
            nums[temp-1]*=-1;
          }
        }
        vector<int> result;
        for(int i=0;i<nums.size();i++)
        {
          if(nums[i]>0)
          {
            result.push_back(i+1);
          }
        }
        return result;
    }
};