#include<iostream>
using namespace std ;

bool isPrime(int n ){
    for (int i =2 ; i< n ; i++){
        if(n % i == 0 ){
            return false ;
        }
    }
    return true;
}

int main(){
    int n ;
    cin >> n ;

    for(int i =2 ; i<=n ; i++){
        bool prime = isPrime(i) ;
        if(prime){
            cout << i << " " ;
        }
        // else{
        //     cout << "no ";
        // }
    }
}