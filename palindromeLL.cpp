class Solution{
  public:
    //Function to check whether the list is palindrome.
    int isPalindrome(Node *head)
    {
            int mid = 0 ; 
            Node *tail = head ; 
            int count = 1 ; 
            while(tail->next != NULL){
                ++count ; 
                tail = tail->next ; 
            }
       if(count&1){
           mid = (count/2)+1 ; 
       }
       else
            mid = count/2 ; 
    
         int z = mid-1 ; 
         Node *prev =head ; 
         while(z){
             prev = prev->next;
             --z ;
         }
         Node *current = prev->next ; 
         Node *forw = NULL ; 
         while(current != NULL){
             forw = current->next ; 
             current -> next = prev ; 
             prev = current ;
             current = forw ; 
         }
         while(mid){
             --mid ; 
             if(tail->data != head->data)
                return 0 ; 
                
            else
            {
                tail = tail->next ; 
                head = head ->next ; 
            }
         }
         return 1 ; 
    }
     
};
