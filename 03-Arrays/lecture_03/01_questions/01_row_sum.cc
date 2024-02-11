#include<iostream>
#include<vector>
using namespace std ;

int main(){
    int crr[2][2]= {{1,2} , {3,4}  } ;

    // row  wise sum of values
    for(int i = 0 ; i<2 ; i++){
    int sum = 0 ;
    for(int j=0 ; j<2 ; j++){
    sum += crr[i][j] ;
    }
    cout << sum << endl;
}

cout << endl ;

// column wise sum  
    for(int i = 0 ; i<2 ; i++)
{
    int sum = 0 ;
    for(int j=0 ; j<2 ; j++){
    sum += crr[j][i] ;
    }
    cout << sum << endl;
}

//  for(int i = 0; i < 2; i++){
//     for(int j=0 ; j < 2; j++){
//          cout << crr[i][j] << " ";
//         if ( j == 2){
//             cout << endl;
//         }
//     }
//    }
}

