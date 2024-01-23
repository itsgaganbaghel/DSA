// take an input of 5 element an print there double 

#include<iostream>
using namespace std ; 

// create a function for prinitng doubles of an element 
int printArray(int arr[], int n ){
    for(int i=0 ; i<n ; i++){
        cout <<  2 * arr[i] << " " ;
    }
}


int main() {
    int arr[50] ;  // take an array of random size 
    int n ;
    cout << "enter the number of input you want in an array " ;
    cin >> n ;

    // taking an input  
        cout << "enter the " << n << " values as input  " ;
    for(int i=0 ; i< n ; i++) {
        cin >> arr[i] ;
    }

    // printing double of every element of an array 
        cout << "double ";
    // for(int i=0 ; i<n ; i++){
    //     cout <<  2 * arr[i] << " " ;
    // }
    int doubles = printArray(arr , n);
}