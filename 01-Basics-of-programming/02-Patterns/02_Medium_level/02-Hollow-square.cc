#include<iostream>
using namespace std ;

int main(){
    int n;
    cout << "Enter the number of start you want - ";
    cin >> n ;
    for(int i=0; i<n; i++ )
    {
            // for(int j =0  ; j< (2 * n -1 ) ; j++){}    // for Hollow Rectangle
            for(int j=0 ; j<n ; j++)                   // for Hollow Square
            {
                if(i == 0 || i == n-1 || j == 0 || j == n-1 )
                    {
                      cout << "* ";
                    }
                else{
                    cout << "  ";   // blank space
                }
            }
            cout<< endl ;// to move down a line after each row is printed.
    }
}