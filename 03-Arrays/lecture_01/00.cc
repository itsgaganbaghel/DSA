// #include <iostream>
// #include<limits.h>
// using namespace std;

// void printArray(int arr[] , int size){
//     for (int i = 0 ; i < size ; i++ ){
//         cout << arr[i] << " ";
//     }
//     cout << endl ;
// }
// void inc(int arr[] ,int size){
//     arr[0] = arr[0] +10;

//     printArray(arr , size);
// }

bool find(int arr[] , int size , int key){
    // linear searching 
    for(int i=0 ;i<size ; i++ ){
        if (arr[i] == key){
            return true ;
        }
    }
    return false;
}

// int main() {
//   cout << "Hello world!" << endl;
//   int arr[53];
//   int n[4]={1,2,3,4} ;// normal array 
// //   int no[3] = {1,2,3,4,5}; // error - to much input 
//   int num[] = {1,2,3} ;  // dynamic array  
//   cout << num[1] << endl ;

//   char crr[6] = {'a', 'b' , 'c', 'd' , 'e' , 'f'} ;   // initialization of na array 
//   cout <<  crr[2] << endl ; // access value from the array  - of index 2 == c , i.e., c is at the address (arr/base_address + index number * datatype (4 bit)) 
//   // let arr is started from the address 104 
//   // then  crr[2] = 104 + 2*4 = 112 
//   //  therefore , at 112 c is stored 

//  // if we want to print all value 
//  for(int i =0 ; i<6 ; i++){
//   cout << crr[i] ;
//  } 

// int arr[10] ;
// cout << "enter value" <<endl; 

// // putting an input value in the arr 
// for(int i=0  ; i<10 ; i++){
//   cin >> arr[i] ;
// }
// // printint
// for(int i=0 ; i< 10 ; i++){
// cout << arr[i] ;
// }

// // arrays and function 
// // take 5 element i/p in array & print their doubles 
// int arr[50];
// int n ;
// cout << "n";
// cin >> n ;

// // taking an i/p form the user  
// cout << "enter input " ;

// for(int i=0 ; i<n; i++){
//   cin >> arr[i] ;
// }

// // printin doubles  
// for(int i=0 ; i<6 ; i++){
//   cout << 2 * arr[i] ;
// }

// assign value of an array is  equall to any specific value i.e., initialize by any specific number 
// int arr[10] ;

// // input assign  
// for(int i=0 ; i<10 ; i++){
//     arr[i] = 1;
// }

// // printing values  
// for(int i=0 ; i<10 ; i++){
//     cout << arr[i] ;
// }


// int arr[] = {5,6};
// int size = 2 ;

// inc(arr ,size );
// printArray(arr , size); // o/p - 15 , 6 
// in the arry functions - we our on the value pased by reference - on original value 
// cout << sizeof(arr) ;  // how much memory it occupied in the memory 

// linear seach in the array 
// is 6 present in the arr ?

// int arr[]={2,3,4,5,6};
// int size = 5 ;
// int key ;
// cout << "key ";
// cin >> key ;

// if(find(arr,size,key)){
//     cout << "key found in the arr"<<endl;
// }
// else{
//     cout << "key is not found in the arr"<<endl;
// }

// count 0's & 1's in an array 

// int arr[] = {1,0,1,0,1,0,1,0,1,0,1,2}  ;
// int size = 12 ;
// int numZero = 0; 
// int numOne = 0; 

// for(int i=0 ; i<size ; i++){
//     if (arr[i] == 0){
//         numZero++ ;
//     }
//     else if(arr[i] == 1)
//     {
//         numOne++;
//     }
// }

// cout << "number of zeroes are : " <<numZero<< endl ;
// cout << "number of ones are : " <<numOne<< endl ;

// find the maximum number 

// int arr[] = {1,2,3,4,5,6,7,8} ;
// int size = 8 ;
// // we take int max = 0 ; //if we have -ve , 0 , +ve = result = +ve , but if we have only -ve , 0 then output is wrong because - o > -ve .
// int max = INT_MIN ; // INT_MIN = automatically find the minimum number from the arry and assign to the max 
// for(int i=0 ; i < size ; i++){
//     if(arr[i] > max){
//         max = arr[i];
//     }
// }

// cout << max ;


// int arr[] = {1,2,3,4,5,6,7,8} ;
// int size = 8 ;
// int min = INT_MAX ; // INT_MAX = automatically find the maximum number from the arr
// for(int i=0 ; i < size ; i++){
//     if(arr[i] <= min){
//         min = arr[i];
//     }
// }
// cout << min ;

// extrem print in array 
// int arr[] = {1,2,3,4,5,6,7,8} ; // we want to print like - 1 8 2 7 3 6 5
// int arr[] = {1,2,3,4,5,6,7,8,9} ; // we want to print like - 1 9 2 8 3 7 4 6 5 
// // 2 pointer approach

// // int size = 8 ;
// int size =9 ;

// int start = 0;
// int end = size - 1 ;

// while(true){
//     if(start > end )
//         break;
    
//     if( start == end ){
//         cout << arr[start] << " ";  // for odd number case 
//     }
//     else{
//     cout << arr[start] << " ";
//     cout << arr[end] << " ";
//     }
//     start++ ;
//     end-- ;

// }

// // reverse of an array  

// int arr[] = {1,2,3,4,5,6,7,8,9} ; // we want to print like - 1 9 2 8 3 7 4 6 5 

// int size =9 ;

// int start = 0;
// int end = size - 1 ;

// while(start <= end){

//     swap(arr[start] , arr[end]);
//     start ++ ;
//     end -- ;
// }

// // printing new values 
// for(int i=0  ; i< size ; i++){
//     cout << arr[i] << " " ;
// }
// return 0 ;

// }