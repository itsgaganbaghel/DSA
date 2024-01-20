#include<iostream>
using namespace std ;

int checkEvenOdd(int num ){
    if((num & 1) == 0 ){
         cout << "even";
    }
     else{
        cout << "odd " ;
    }
    // ---- another method ----- 
    // if(num % 2 == 1){
    //     cout << "even";
    // }
    // else{
    //     cout << "odd " ;
    // }
}

int main(){
    int n ;
    cout << "enter any positive number n ";
    cin >> n ;

    int numb = checkEvenOdd(n) ;
    // cout << numb ;

}