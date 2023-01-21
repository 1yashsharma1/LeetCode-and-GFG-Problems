//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // intializing max with int_min to handle negative elements
  int max = INT_MIN;
  int smax=INT_MIN;
  // update max whenever element is greater than the current_max
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > max)
    {
      smax=max;
      max = arr[i];
    }
    if(arr[i]>smax&&arr[i]<max){
      smax=arr[i];
    }
    
  }
  // return max and smax in the end
    if(smax==INT_MIN){
        return -1;
    }
    return smax;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends