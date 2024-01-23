
// find  max number in an array 

#include<iostream>
using namespace std ;

int findMax(int arr[] , int n ){
    int maxNum = INT16_MIN ;
    for(int i=0 ; i<n ; i++){
        if(arr[i] > maxNum){
            maxNum = arr[i] ;
        }
    }
    cout << "Max number is : " << maxNum ;
}

int main() {
    // basic method 
    // int arr[4] = { 1 ,2,3,4};
    // int size = 4;
    // int maxNum = INT16_MIN ;

    // // check max number 
    // for(int i=0 ; i< size ; i++){
    //     if(arr[i] > maxNum){
    //         maxNum = arr[i] ;
    //     }
    // }
    // cout << maxNum ;

    int arr[40];
    int n ;
    cout << "enter how many numbers u want in an array : " ;
    cin >> n ;
    cout << endl;

    // taking an input 
    cout <<  "enter " << n << " values as a input : ";
    for(int i=0 ; i< n ;i++) {
        cin >> arr[i];
    }
    // function call
    findMax(arr , n ); 
}