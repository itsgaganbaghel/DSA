// linear searching - find an element is present or not in an array  

#include<iostream>
using namespace std ; 


bool find(int arr[] , int size , int key){
    // linear searching 
    for(int i=0 ;i<size ; i++ ){
        if (arr[i] == key){
            return true ;
        }
    }
    return false;
}


int main() {
    // int arr[40]; 
    // int n  ;
    // cout << "Enter the number of element u want in an array ";
    // cin >> n ;                      

    // taking an inpput 
    // cout << "enter" << n << "values as an input ";
    // for(int i=0 ; i < n ; i++){
    //     cin >> arr[i] ;
    // }

    int arr[] = {1,3,4,5,6};
    int n = 5 ;
    int key ;
    cout << "enter the value of key that u want to check in an array " ;
    cin >> key ;
     
    if(find(arr,n,key)){
        cout << " found";
    }
    else{
        cout << "not found" ;
    }
}