
long long int floorSqrt(long long int x) 
{
    long long end = x ;
    long long  start = 0; 
    
    while(end>=start)
    { long long  mid = start + (end-start)/2 ; 
        if(mid*mid==x)
        {
            return (long)mid ; 
        }
        else if(mid*mid > x)
        {
            end = mid -1 ; 
        }
        else{
            start = mid+1 ; 
        }
    }
}
