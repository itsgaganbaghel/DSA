#include<iostream>
using namespace std ;

int main (){
    int n ;
    cout << "enter the value of n ";
    cin >> n;

    for(int i =0 ; i<n ; i++){
        int j;
        for(j=0 ; j<i+1 ; j++){
            cout << j+1;
        }
        // j = j-1 ; // or we initialise j=i in the for loop 

        // reverse counting printing 
        for(int j =i; j>=1 ; j--){
        cout << j ;
        }
        cout << endl;
    }
}