// print the extreme  value/element of an array 

#include <iostream>
using namespace std ;

int main() {
    int arr[] = {1,2,3,4,5} ;
    int size = 5;
    int start = 0 ;
    int end = size -1 ;

    for (int i=0 ; i < size ; i++){
        if(start > end){
            break;
        }
        else if ( start == end ){
            cout << arr[start] ;
        }
        else{
            cout << arr[start] ;
            cout << arr[end]   ;
        }

        start ++ ;
        end -- ;
    }


}