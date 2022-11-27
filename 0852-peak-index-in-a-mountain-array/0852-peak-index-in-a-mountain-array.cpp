class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;

    while(start<end)
    {
      if(arr[mid]<arr[mid+1])
      /*
      if arr[mid]<arr[mid+1], then we shift start to
      mid+1
      */
      {
        start=mid+1;
      }
      else
      /*
      if arr[mid]>arr[mid+1], then we shift the end
      to the mid
      */
      {
        end=mid;
      }
      mid=start+(end-start)/2;
    }

  /*
  In the end the start will point to the peak of 
  the mountain
  */

    return start;
        
    }
};