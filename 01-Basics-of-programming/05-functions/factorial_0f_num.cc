#include<iostream>
using namespace std ;

long long int factorialNum(int n ){
    long long int fact = 1 ;
    for(int i =1 ; i<= n  ; i++){
        fact = fact * i ;
    }
    return fact  ;
}

int main(){
    int n ;
    cout << "enter any positive number n ";
    cin >> n ;

    long long int numb = factorialNum(n) ;
    cout << numb ;

}


