#include<iostream>
using namespace std ;

int main (){
    int n ;
    cout << "enter the value of n ";
    cin >> n;
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