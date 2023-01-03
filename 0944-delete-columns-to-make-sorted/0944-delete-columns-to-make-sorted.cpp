class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
  int count=0;
  for(int i=0;i<strs[0].size();i++)
  {
    for(int j=0;j+1<strs.size();j++)
    {
      if(strs[j].at(i)>strs[j+1].at(i))
      {
          count++;
          break;
      }
    }
  }
  return count;
  }
};