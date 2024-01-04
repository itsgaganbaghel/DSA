#include<iostream>
using namespace std ;

int main (){
    int n ;
    cout << "enter the value of n ";
    cin >> n;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(j < n-i-1){
                cout << " ";
            } else{
                cout << "* ";
                // cout << "*";  // inverted half pyramid starting from the right side 
            }
        }
        cout << endl;
    }

     for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(j<i){
                cout << " ";
            }
            else{
                cout<< "* ";
            }
        }
        cout << endl;
    }
}