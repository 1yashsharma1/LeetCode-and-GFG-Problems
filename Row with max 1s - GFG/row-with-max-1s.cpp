//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
int rowWithMax1s(vector<vector<int>> arr, int n, int m)
{
  int rowNo = -1;
  int maxOne = 0;

  for (int i = 0; i < n; i++)
  {
    int tempcount = 0;
    // we will traverse every row and store the number of 1 in
    // tempcount variable
    for (int j = 0; j < m ; j++)
    {
      if (arr[i][j] == 1)
      {
        tempcount++;
      }
    }
    // the maxOne variable will store the maximum number of 1 in a row
    // rowNo will store the number of row which has maximum number of 1
    // both these will be updated if any row has more number of 1 than prev
    if (tempcount > maxOne)
    {
      maxOne = tempcount;
      rowNo = i;
    }
  }
  return rowNo;
}


};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends