#include<iostream>
using namespace std ;

int main ()
{
    int n;
    cout << "enter the value of n ";
    cin >> n;

    // in this  problem we use method - binomial coffiecent (formula hai ye ek )
    for(int i =1  ;i <=n  ;i++){
        int c = 1 ;
        for(int j=1 ; j <= i  ; j++){
            cout << c << " " ; 
            c = c* (i - j ) / j ;  // formula 
        }
        cout << endl; 
    }
}