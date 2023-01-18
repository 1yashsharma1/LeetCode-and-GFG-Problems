class Solution {
public:
   void findCombination(int index, int target, vector<int> &candidates, vector<int> &ds, vector<vector<int>> &res)
{
  if (target == 0)
  {
    res.push_back(ds);
    return;
  }

  for (int i = index; i < candidates.size(); i++)
  {

    if (i > index && candidates[i] == candidates[i - 1])
    {
      continue;
    }

    if (candidates[i] > target)
    {
      break;
    }
    ds.push_back(candidates[i]);
    findCombination(i+1, target - candidates[i], candidates, ds, res);
    ds.pop_back();
  }
}

vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{

  vector<int> ds;
  vector<vector<int>> res;
  sort(candidates.begin(), candidates.end());
  findCombination(0, target, candidates, ds, res);
  return res;
}
};