#include<iostream>
#include<vector>
using namespace std ;

int getMax(int arr[][3] , int r , int c )   
// arr[][3] - here 3 is the number of column in the array , 
// because we want to perform the formula = c * i + j , 
// here c is the number of column in the array, that are imp to required .

{
    int max = INT16_MIN ;

    for(int i=0 ; i< r ; i++)
    {
        for(int j=0 ; j< c ; j++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j] ;
            }
        }
    }
             return max ;
}

int getMin(int arr[][3] , int r , int c )
// arr[][3] - here 3 is the number of column in the array , 
// because we want to perform the formula = c * i + j , 
// here c is the number of column in the array, that are imp to required .

{
    int min = INT16_MAX ;

    for(int i=0 ; i< r ; i++)
    {
        for(int j=0 ; j< c ; j++)
        {
            if(arr[i][j] < min)
            {
                min = arr[i][j] ;
            }
        }
    }
             return min ;
}




int main(){

    int arr[3][3] = { {1,2,3} , {4,5,6} , {7,8,9} }  ;
    int row = 3 ;
    int col = 3 ;

    cout << getMax(arr , row , col) << endl ;
    cout << getMin(arr , row , col) ;
}