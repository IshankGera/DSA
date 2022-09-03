//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        int j = m+1 ,   i = l ; 
        int l1 = m-l+1 ; 
        int l2 = r-m , mainindex = 0 ; 
        int copy[l1+l2] ; 
        while(i <= m && j <= r){
            if(arr[i] <=arr[j]){
                copy[mainindex++] = arr[i++] ; 
            }
            else{
                copy[mainindex++] = arr[j++] ; 
            }
        }
        while(i <= m )
        {
            copy[mainindex++] = arr[i++] ; 
        }
        while( j <= r)
        {
            copy[mainindex++] = arr[j++] ; 
        }
        for(int f = 0 ; f<(l1+l2) ; ++f){
            arr[l++] = copy[f] ;  
        }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        int mid = (l+r)/2 ; 
        if(l>=r)
            return ; 
        
        mergeSort(arr , l , mid) ; 
        mergeSort(arr , mid+1 , r) ; 
        merge(arr,l,mid,r) ; 
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends
