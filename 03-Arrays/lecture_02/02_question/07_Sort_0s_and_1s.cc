#include<iostream>
#include<vector>
using namespace std ;

void printArray (vector<int> arr) {
    for(auto value : arr){
        cout << value << " ";
    }
}
int main(){
    vector<int> arr{1,0,0,1,1,0,1,0,1,0};
    int start = 0 ;
    int end = arr.size() -1 ;
    int i = 0 ;

    // while(i < end )
    while(i != end )
    {
        if( arr[i] == 0 ){
            swap( arr[start] , arr[i] );
            start ++ ;
            i++ ;                    // update i only for start , if start == 0 then update else not update .
        }
        else{
            swap( arr[i] , arr[end]);
            end -- ;
        }

       }

       printArray(arr);              // print the array after update / sort the value 

    // for(int i = 0 ; i < arr.size() ; i++){
    // for(auto value:arr){           // auto - automatically check the data type of the items , 

    //     cout << arr[i] << " " ;
    // }
   
}