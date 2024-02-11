#include<iostream>
#include<vector>
using namespace std ;

void printArray (vector<int> arr) {
    for(auto value : arr){
        cout << value << " ";
    }
}
int main(){
//     // 2D array ]]
//     // Declaration  of an array 
//     int arr[3][3] = { {1,2,3} , {4,5,6} , {7,8,9} };

//     // initialization of an array
//     int brr[3][3] = { {1,2,3} , {4,5,6} , {7,8,9} };

//     //  print an array 
//     for(int i=0 ; i<3 ; i++){
//         cout << arr[0][0] << " " << arr[0][1] << " " << arr[0][2] << " "  << endl ;
//         cout << arr[1][0] << " " << arr[1][1] << " " << arr[1][2] << " " << endl ;
//         cout << arr[2][0] << " " << arr[2][1] << " " << arr[2][2] << " " << endl ;
//     }
//    cout << endl << endl;

//     // row  implement array constructor
//    for(int i = 0; i < 3; i++){
//     for(int j=0 ; j < 3; j++){
//          cout << brr[i][j] << " ";
//         if ( j == 2){
//             cout << endl;
//         }
//     }
//    }
//    cout << endl << endl;
//     // column  implement array constructor
//     for(int j =0 ; j<3 ; j++){
//         for(int i =0 ; i< 3 ; i++){
//             cout << brr[i][j] << " ";
//             if( i == 2){
//                 cout << endl;
//             }
//         }
//     }

// int crr[3][3];

// input 

// row wise input -  number of rows and columns can be same or different 
// for(int i = 0 ; i<3 ; i++){
//     for(int j=0 ; j<3 ; j++){
//     cin >>  crr[i][j];
//     }
// }

//  for(int i = 0; i < 3; i++){
//     for(int j=0 ; j < 3; j++){
//          cout << crr[i][j] << " ";
//         if ( j == 2){
//             cout << endl;
//         }
//     }
//    }

   // column wise input  -- for this 2d array have equal number of rows and columns 
// for(int i = 0 ; i<3 ; i++){
//     for(int j=0 ; j<3 ; j++){
//     cin >>  crr[j][i];
//     }
// }

//  for(int i = 0; i < 3; i++){
//     for(int j=0 ; j < 3; j++){
//          cout << crr[i][j] << " ";
//         if ( j == 2){
//             cout << endl;
//         }
//     }
//    }


}