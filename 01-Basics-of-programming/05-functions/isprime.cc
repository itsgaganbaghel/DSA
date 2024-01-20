#include<iostream>
using namespace std ;

bool isPrime(int num ){
    for (int i= 2 ; i<num ; i++){
        if(num % i == 0){
            return false ;
        }
    }
    return true  ;
}

int main () {
    int n ;
    cin >> n ;

    bool numb = isPrime(n);

    if(numb){
        cout << "prime" ;
    }
    else{
        cout<< "not prime ";
    }
}