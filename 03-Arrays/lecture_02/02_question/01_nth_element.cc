#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int> arr{1,2,3,4};
    for(int i=0 ; i<arr.size() ; i++){
        if(arr[i] == arr[arr.size() - 1 ]) {
            cout << arr[i];
        }
    }

}