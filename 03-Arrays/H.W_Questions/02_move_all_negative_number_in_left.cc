#include<iostream>
#include<vector>
using namespace std ;

void printArray (vector<int> arr) {
    for(auto value : arr){
        cout << value << " ";
    }
}


int main(){
    vector<int> arr{1,-1,0,-3,2,-2,2};
    int start = 0;
    int end = 7 ;

    while(start < end ){
        if(arr[start] < 0 ){
            start++ ;
        }
        else if(arr[end] > 0){
            end--  ;
        }
        else{
            swap(arr[start] , arr[end]);
        }
    }



    printArray(arr);
}