#include<iostream>
#include<vector>
using namespace std ;

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
    //     cout << crr[i] << " ";              // n * -1 
    // }
    // cout << endl;

    vector<int> drr{1,2,3,4,5};
    for(int i=0 ; i< drr.size() ; i++){
        cout << drr[i] << " ";                      // 1 2 3 4 5
    }
}