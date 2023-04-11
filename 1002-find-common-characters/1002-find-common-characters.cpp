class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
    vector<int> cnt(26,INT_MAX);
    vector<string> res;
    for(auto word:words){
        vector<int> cnt1(26,0);
        for(auto c:word){
            cnt1[c-'a']++;
        }
        for(int i=0;i<26;i++){
            cnt[i]=min(cnt1[i],cnt[i]);
        }
    }
    for(int i=0;i<26;i++){
        for(int j=0;j<cnt[i];j++){
            res.push_back(string(1,i+'a'));
        }
    }
    return res;    
}
};