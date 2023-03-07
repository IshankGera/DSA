class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long low = *min_element(time.begin() , time.end()) ;
        long long high = *max_element(time.begin() , time.end()) ; 
        high *= totalTrips ; 
        long long ans = high ; 
        long long mid = 0 ; 
        long long n = time.size() ;
        long long curtime = high ;
        long long curtrips = high ; 
        while(low<=high){
            mid = ((high-low)/2)+low ;
            curtrips = 0;
            for(int i = 0 ; i<n ; ++i){
                curtrips += mid/time[i] ;
            }
            if(curtrips>= totalTrips && mid<ans ){
                ans = mid ;
                high = mid-1 ;
            }
            else{
                low = mid+1 ;
            }
        }
        return ans ;
    }
};
