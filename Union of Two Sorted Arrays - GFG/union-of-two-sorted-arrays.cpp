//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
   vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
  unordered_set<int> res;
  // inserting both arrays in set
  for (int i = 0; i < n; i++)
  {
    res.insert(arr1[i]);
  }
  for (int i = 0; i < m; i++)
  {
    res.insert(arr2[i]);
  }
  // now set has union so before returning we will copy it to
  // vector and sort the vector and then return it
  vector<int> result(res.begin(), res.end());
  sort(result.begin(), result.end());
  return result;
}
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends