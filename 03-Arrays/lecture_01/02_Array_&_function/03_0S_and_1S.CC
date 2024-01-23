// cout 0's & 1's in an array 

#include<iostream>
using namespace std ;

int check(int arr[] , int size){
     int zero =0, one = 0 ;
     for(int i=0 ; i<size ; i++){
        if( arr[i] == 0){
            zero ++ ;
        }
        else if (arr[i] == 1) {
            one ++;
        }
    }
     cout << "count of 0's are : " << zero  << endl ;
     cout << "count of 1's are : " << one ;
}

int main (){

    int arr[] = { 1,1,1,0,0,0,0};
    int size = 7 ;

    check(arr , size);  // function call 
    

    // int zero =0, one = 0 ;

    // count numbers of 0's & 1's 
    // for(int i=0 ; i<size ; i++){
    //     if( arr[i] == 0){
    //         zero ++ ;
    //     }
    //     else if (arr[i] == 1) {
    //         one ++;
    //     }
    // }
    
    // cout << "count of 0's are : " << zero  << endl ;
    // cout << "count of 1's are : " << one ;

}