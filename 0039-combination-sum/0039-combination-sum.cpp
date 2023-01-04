class Solution {
public:
    void combine(vector<vector<int>> &res,vector<int>& candidates,vector<int> ds,int target,int sum,int index){

  if(sum==target){
  res.push_back(ds);
  return;
}

if(index==candidates.size()||sum>target)
{
  return;
}

sum+=candidates[index];
ds.push_back(candidates[index]);  
combine(res,candidates,ds,target,sum,index);
ds.pop_back();
sum-=candidates[index];
combine(res,candidates,ds,target,sum,index+1);
}


vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> res;
        int index=0;
        vector<int> ds;
        int sum=0;
        combine(res,candidates,ds,target,sum,index);
        return res;
    }

};