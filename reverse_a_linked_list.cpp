    struct Node* reverseList(struct Node *head)
    {
         Node* prev  = NULL ; 
         Node* curr  = head ; 
         Node* forw  = NULL ; 
         while(curr!=NULL){
             forw = curr->next ; 
             curr->next = prev ; 
             prev = curr ; 
             curr = forw ; 
         }
        return prev ; 
    }
