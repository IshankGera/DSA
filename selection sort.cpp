
void selectionSort(int arr[], int n)
{
      int c ; 
  for(int i = 0 ; i < n-1   ; ++i )
  {
      int min = arr[i] ; 
      int index = i ; 
      for(int j = i + 1 ;  j < n ; ++j)
      {
          if (arr[j] < min)
          {
              min =  arr[j] ; 
              index = j  ; 
          }
      }
      c = arr[index] ; 
      arr[index] =  arr[i]  ; 
      arr[i] = c ; 
  }
}
