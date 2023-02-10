class Solution {
public:
int majorityElement(vector<int>& nums) {
  int n=floor(nums.size()/2);
  int max=0;
  unordered_map<int,int> m;
  for(int i=0;i<nums.size();i++){
    m[nums[i]]++;
  }
  for(int i=0;i<nums.size();i++){
    if(m[nums[i]]>max){
      max=m[nums[i]];
    }
  }
  for(auto it:m){
    if(it.second==max){
      return it.first;
    }
  }
    return 0;
}
        

};