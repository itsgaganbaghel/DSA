#include<iostream>
using namespace std ;

int main(){
    int n ;
    cout << "Enter value of n ";
    cin >> n;

    for(int i=0 ; i<n ; i++){
        int k =0 ;
        for(int j =0 ; j < ((2*n)-1); j++){
            // cout << "*";
           if(j < n - i - 1){
            cout << " ";
           }
           else if(k < 2 * i + 1 ){
            cout << "*";
            k++ ;
           }
           else{
            cout << " " ;
           }
        }
        cout << endl;
    }
}