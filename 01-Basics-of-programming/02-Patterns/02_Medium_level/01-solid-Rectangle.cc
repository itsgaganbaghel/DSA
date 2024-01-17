#include<iostream>
using namespace std ;

int main(){
    int n;
    cout << "Enter the number of start you want - ";
    cin >> n ;
    for(int i =0 ; i<n ; i++){
        for(int j =0 ; j< (2 * n - 1) ; j++){
            cout << "*";
           
        }
        cout << endl;
        

    }
}