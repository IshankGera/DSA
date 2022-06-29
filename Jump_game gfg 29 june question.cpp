// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int canReach(int A[], int N) {
          int mx = 0 ; 
    for(int i = 0 ; i<N-1 ; ++i)
    {
        --mx ; 
        if(mx <= A[i] && A[i]!=0)
        {
            mx = A[i] ; 
        }
        else if (A[i]==0 && mx == 0)
        
        {
            return 0 ;             
        }
        
    }
    return 1 ;  
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}  // } Driver Code Ends
