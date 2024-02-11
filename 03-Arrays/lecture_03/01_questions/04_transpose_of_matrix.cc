#include<iostream>
#include<vector>
using namespace std ;

int main (){
    int arr[3][3] = { {1,2,3} , {4,5,6} , {7,8,9} }  ;
    int r = 3 ;
    int col = 3 ;
    int transpose[3][3] ;
 
    for(int i = 0 ; i <r ; i++){
        for(int j=0 ; j <col ; j++){
            // swap(arr[i][j] , arr[j][i]);
            transpose[j][i] = arr[i][j]  ;
        }
    }

    // for(auto val : arr){
    //     cout << val << " " << endl;
    // }

    for(int i = 0 ; i <r ; i++){
        for(int j = 0 ; j <col ; j++){
        cout << transpose[i][j] << " ";
    }
            cout << endl;
}
}