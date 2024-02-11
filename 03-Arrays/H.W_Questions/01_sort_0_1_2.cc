#include<iostream>
#include<vector>
using namespace std ;

void printArray (vector<int> arr) {
    for(auto value : arr){
        cout << value << " ";
    }
}
int main(){
    vector<int> arr{1,0,2,0};
    int start = 0 ;
    int end = arr.size() -1 ;
    int i = 0 ;

    cout << end << endl ;
    // while(i < end )
    while(i < end )
    {
        if(arr[i] == 1){
            swap(arr[start] , arr[end]);
        }
        else if(arr[i] == 0 ){
            swap(arr[i] , arr[start]);
            // start++ ;
        }
        else if(arr[i] == 2){
            swap(arr[i] , arr[start]);
            // end-- ;
        }
        
        i++ ;

       }

       printArray(arr);              // print the array after update / sort the value 

    // for(int i = 0 ; i < arr.size() ; i++){
    // for(auto value:arr){           // auto - automatically check the data type of the items , 

    //     cout << arr[i] << " " ;
    // }
   
}