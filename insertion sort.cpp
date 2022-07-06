  void insert(int arr[], int i)
    {
        // Your code here  
    }
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        int j ; 
        int key  ; 
        for(int i = 1 ; i < n ; ++i)
        {
            j = i - 1 ;
            key = arr[i] ;
        while(arr[j]>key  &&  j>=0 )
        {
            arr[j+1] = arr[j] ; 
            --j ; 
        }   
        
        arr[j+1] = key ;
        
    }

}
