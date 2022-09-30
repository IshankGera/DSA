    int trap(vector<int>& height) {
        int n = height.size() ; 
        int left[n] , right[n]  ; 
       int maxl = height [0] ; 
        for(int i = 0 ; i<n ; ++i){
            if(height[i] >= maxl){
                left[i] = height[i] ;
                maxl = height[i] ; 
            }
            else{
                left[i] = maxl; 
            }
        }
        int maxr = height [n-1] ; 
        for(int j = n-1 ; j>=0 ; --j){
            if(height[j] >= maxr){
                right[j] = height[j] ;
                maxr = height[j] ; 
            }
            else{
                right[j] = maxr; 
            }
        }
        int v = 0 , ans = 0;
        for(int arr = 0 ; arr<n ; ++arr){
            v  = min(left[arr], right[arr]) ; 
            if((v-height[arr]) >0){
                ans += v-height[arr];
            }
        }
        return ans ; 
        
    }
