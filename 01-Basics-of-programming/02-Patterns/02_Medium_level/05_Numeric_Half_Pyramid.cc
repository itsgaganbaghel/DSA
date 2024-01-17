#include<iostream>
using namespace std ;

int main (){
    int n ;
    cout << "enter the value of n ";
    cin >> n;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j <= i  ; j++){
            cout << j+1 ;
            
            // make it hollow 
            // if(j == 0 || j == i || i == n-1){
            // cout << j+1 ;
            // }else{
            //     cout << " ";
            // }
        }
        cout << endl;
    }
}