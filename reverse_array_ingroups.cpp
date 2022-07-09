
class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        int end  , start ;
        for(int s  = 0 ; s < n ; s = s + k  )
        {
        start = s ; 
        end = start + k - 1 ;
        if(end > n-1)
        {
            end = n-1 ;
        }
        while(end >= start)
        {
            swap(arr[start] , arr[end]) ; 
            ++start ; 
            --end ; 
        }
        
    }
    }
    
