#include<iostream>
using namespace std ;

int main () {
    // declaration of an array 

    // create an array 
    // int arr[5] ;
    // int brr[] = {1,2,3};
    // int crr[4] = { 1,2,3,4};

    // int n ; 
    // cin >> n ;
    // int drr[n] ; // bad practise 

    int arr[5] ;
    int sizeA = 5 ;
    cout << " enter the " << sizeA << "  vlaue  " ;

    // taking an input 
    for(int i=0 ; i< sizeA  ; i++){
        cin >> arr[i] ;
    }

    // printing an output 
    for(int i=0 ; i<sizeA ; i++){
        cout << arr[i]  << " " ;
    }

    

    
    
    
}