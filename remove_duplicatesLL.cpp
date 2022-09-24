class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
    map <int , bool> visited ; 
   
    Node *ptr = head ; 
    Node *prev  = NULL ; 
    Node *fore = ptr->next ; 
    while(ptr != NULL){
        fore = ptr->next ;
        int store = ptr->data ; 
        if(visited[store] == 0){
            visited[store] = 1 ;
            prev = ptr ;
            ptr = ptr->next ; 
             
        }
        else if (visited[store] == 1 ){
            prev->next = ptr->next ; 
            ptr->next = NULL ; 
            ptr = fore ; 
        }
    }
    return head ; 
    }
};
