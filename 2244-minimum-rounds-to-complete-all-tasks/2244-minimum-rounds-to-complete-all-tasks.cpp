class Solution {
public:
    int minimumRounds(vector<int> &tasks)
{
  unordered_map<int, int> m;
  int count = 0;
  for (int i = 0; i < tasks.size(); i++)
  {
    m[tasks[i]]++;
  }
  for (auto res : m)
  {
    if (res.second == 1)
    {
      return -1;
    }
    if (res.second % 3 == 0)
    {
      count += res.second / 3;
    }
    else
    {
      count += (res.second / 3) + 1;
    }
  }
  return count;
}
};