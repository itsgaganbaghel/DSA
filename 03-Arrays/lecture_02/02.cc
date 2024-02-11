#include<iostream>
#include<vector>
using namespace std ;

int findUnique(vector<int> arr){
    int ans =0 ;
     for(int i=0 ; i< arr.size() ; i++){
        ans = ans ^ arr[i] ;
     }
     return ans ; 
}
int main (){
    //  creatè vector 

    // vector<int> arr ; // include vector file to 

    // int ans = (sizeof(arr)/sizeof(int));
    // cout << ans << endl; 

    // cout << arr.size() << endl;

    // // insert 
    // arr.push_back(5) ;
    // arr.push_back(6) ;

    // // printing of vector 
    // for(int i=0 ;i<arr.size() ; i++){
    //     cout << arr[i] << " ";
    // }

    // // remove element  
    // arr.pop_back();
    // cout << "\nAfter pop back : \n" ;

    // // printing 
    // for(int i=0 ;i<arr.size() ; i++){
    //     cout << arr[i] << " ";
    // }

    // create a vector of size given by user - dynamic vector  
    // int n ;
    // cin >> n ;

    // vector<int> brr(n);
    // cout << brr.size() << endl;    // n
    // cout << brr.capacity() << endl; // n

    // // create a vector with predefined values in the whole vector by single specific value 
    // vector<int> crr(n , -1);
    // // printing the vector crr 
    // for(int i=0 ; i<crr.size() ;  i++ ){
    //     cout << crr[i] << " ";              // n times =  -1 
    // }
    // cout << endl;

    // vector<int> drr{1,2,3,4,5};         // not  used this practise most of the time *
    // for(int i=0 ; i< drr.size() ; i++){
    //     cout << drr[i] << " ";                      // 1 2 3 4 5
    // }

    // how to find nth element in the vector 

    // vector<int> err{1,2,3,4};
    // for(int i =0 ; i< err.size() ; i++){
    //     if(err[i] == err[err.size()-1] ){
    //         cout << err[i] ;
    //     }
    // }

    // 1. find the unique element 
    // vector<int> arr{1,2,3,4,5,5,4,3,2,1,0} ; // o/p - 0 

   //  int n ;
   //   cout << "enter the size of the array ";
   //   cin >> n ;

   //   vector<int> arr(n);
   //   cout << " enter the element  " ;
   //   for(int i=0 ; i< arr.size() ; i++){
   //      cin >> arr[i];
   //   }
   //   int uniqueNumber = findUnique(arr);
   //   cout << uniqueNumber  ;

   // union of  2 array 

   // int arr[] = {1,2,3,4,5};
   // int sizea = 5 ;
   // // int brr[] = {6,7,8,9};
   // int brr[] = {3,4,6,7} ;
   // int sizeb = 4 ;

   // vector<int> ans;

   // //push all element of arr into ans ;
   // // for (int i : arr) {ans.push_back(i);}
   // // for (int i=0 ; i < sizea ; i++) {
   // //    for(int j=0 ; j < sizeb ; j++){
   // //       if( arr[i] == brr[j] ) ;
   // //       brr[j] = -1 ;
   // //    }
   // // }
   // for (int i=0 ; i < sizea ; i++) { cout << arr[i] << " " ;} ;
   // for (int i=0 ; i < sizeb ; i++) { cout << brr[i] << " " ;} ;

   // // for (int i=0 ; i < sizea ; i++) {ans.push_back(arr[i]);} ;
   // // for (int j=0 ; j < sizeb ; j++) {
   // //    if(brr[j] != -1 ) {ans.push_back(brr[j]);} ;
   // // }
   // for (int i=0 ; i < ans.size() ; i++) { cout << ans[i] << " " ;} ;

   // if duplicate number exist  


   // intersection of  arrays  
   //  int arr[] = {1,2,3,4,5};
   // int sizea = 5 ;
   // int brr[] = {3,4,4,5,6};
   // int sizeb = 4 ;

   // vector<int> ans;
   // // outer loop for 1st array 
   //  for(int i=0 ; i< sizea ; i ++){
   //    int element = arr[i];  // for better readability 
   //    // inner loop - 2nd loop 
   //    for(int j=0 ;j < sizeb ; j++ ){
   //       if(arr[i] == brr[j]){         // matching 
   //          ans.push_back(arr[i]);
   //          break;                     // to remove duplicates - best practice
   //          // brr[i] = -1 ;              // mark to any -ve value 
   //          // but if -ve value in the given vlaues 
      
   //       }
   //    }
   //  }
   //  for(int i =0 ; i < ans.size() ; i ++){
   //    cout<<ans[i]<<" ";
   //  }

   // pair sum
   // vector<int> arr{1,2,3,4,5};
   // int sum = 7;
   // // print all pair 
   // // outer loop will traverse for each element 
   // for(int i=0 ; i < arr.size() ; i++){
   //    // inner loop will check every other elements with first one
   //    // cout << "we are at element "<< arr[i] << endl; 
   //    int element = arr[i] ;
   //    for(int j=i+1 ; j < arr.size() ; j++){
   //       // cout << "pair " << element << " with " << arr[j] << endl;
   //       // cout << "(" << element << "," << arr[j] << ")" << endl;
   //       if(element + arr[j] == sum ){
   //          cout << "pair found " << element << "," << arr[j] << endl  ;
   //       }
   //    }
   // }

   // triplet 
   // vector<int> arr{10,20,30,40,50};
   // int sum = 80 ;

   // for(int i=0 ; i< arr.size() ; i++){
   //    for(int j=i+1 ; j< arr.size() ; j++){
   //       for(int k= j+1 ; k < arr.size() ; k++){
   //          if(arr[i]+arr[j]+arr[k]==sum){
   //          cout << "triplet found " << arr[i] << "," << arr[j] << "," << arr[k] << endl;  
   //          }
   //       }
   //    }
   // }

      // for(int i=0 ; i< arr.size() ; i++){
      // int element1 = arr[i] ;
      // for(int j=i+1 ; j< arr.size() ; j++){
      //     int element2 = arr[j] ;
      //    for(int k= j+1 ; k < arr.size() ; k++){
      //        int element3 = arr[k] ;
      //       if( element1 + element2 +element3 ==sum){
      //       cout << "triplet found " << element1 << "," << element2  << "," << element3 << endl;
      //       }
      //    }
      // }
   // }

}