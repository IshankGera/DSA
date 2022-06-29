
class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int start = 0 ; 
        int end = n ; 
        int mid ; 
        while(end>=start)
        {
            mid = start + ((end - start) / 2) ; 
            if(arr[mid] == k )
            {
                return mid ; 
            }
            else if(arr[mid] > k)
            {
                end = mid -1 ;
                
            }
            else if(arr[mid] < k )
            {
                start = mid + 1 ; 
            }
        }
        return -1 ;  
    }
};
