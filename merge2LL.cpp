Node* sortedMerge(Node* head1, Node* head2)  
{  
    // first chote head wale ko lenge
    Node *first = NULL ; 
    Node *second = NULL ; 
        if(head1->data <= head2->data){
            first = head1 ; 
            second = head2 ; 
        }
        else{
            first = head2 ; 
            second = head1 ; 
        }
        Node *curr = first ; 
        Node *next1 = first->next ; 
        Node *curr2 = second ; 
        Node *next2 = second->next ; 
        if(next1 == NULL){
                curr->next = curr2 ; 
                return first ; 
            }
        while(  curr != NULL && curr2 != NULL){
                    if(curr->data <= curr2->data && curr2->data <= next1->data){
                        curr->next = curr2 ; 
                        next2 = curr2 ->  next ; 
                        curr2->next = next1 ; 
                        curr = curr2 ; 
                        curr2 = next2 ;
                       
                    }
                    else {
                        curr = next1 ; 
                        next1 = next1 -> next ; 
                    }
        
        if(next1 == NULL){
                curr->next = curr2 ; 
                return first ; 
            }
        }
        
        return first ; 
}  
