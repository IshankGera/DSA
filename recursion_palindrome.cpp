#include<iostream>
using namespace std ; 
bool ispalindrome(string str ,int l  , int r){
    if(l<r)
     ispalindrome(str , l+1 , r-1); 
     
    if(str[l]!=str[r])
        return 0 ; 
        
    else{
        return 1 ; 
    }
    
}
int main(){
    string str ; 
    cout << "enter the string : " ; 
    cin >> str ; 
    int x = str.length()-1 ; 
    cout << ispalindrome(str , 0 , x) ; 
}
