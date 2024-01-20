#include<iostream>
using namespace std ;

float areaOfCircle( float r){
    float area = 2 * 3.14 * r ;
    return area ;
}
int main(){
    float n ;
    cout << "enter any positive number n ";
    cin >> n ;

    float a = areaOfCircle(n) ;
    cout << a ;
    
}