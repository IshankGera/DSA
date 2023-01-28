#include<iostream>
#include<queue>
using namespace std ;
class node{
  public:
    int data ;
    node *left ;
    node *right ; 

    node(int s){
        this->data = s ;
        this->left=NULL ;
        this->right=NULL;
    }
};
node *buildtree(node *root){
    cout << "enter the data for the root node : " ;
    int f ;
    cin >> f;
    root = new node(f);
    if(f == -1){
        return NULL ;
    }
    cout << "enter data for the left of "<<f<<endl ;
    root->left = buildtree(root->left) ;
    cout << "enter data for the right of "<<f<<endl ;
    root->right = buildtree(root->right) ;
    
    return root ;
}
void levelorder(node *root){
    queue<node*>q ;
    q.push(root) ;
    q.push(NULL) ;
    while(!q.empty()){
        node *temp = q.front();
        q.pop() ;
        if(temp == NULL){
            cout <<endl ;
        if(!q.empty()){
            q.push(NULL) ;
        }
        }
        else{
            cout << temp->data<< " " ;
         if(temp->right){
            q.push(temp->right) ;
        }
        if(temp->left){
            q.push(temp->left) ;
        }
            
        }
    }
    
}
int main(){
    node *root = NULL ;
    root = buildtree(root) ;
    levelorder(root) ;
    return 0;
}
