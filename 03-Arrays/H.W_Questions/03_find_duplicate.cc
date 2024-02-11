#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

void printArray (vector<int> arr) {
    for(auto value : arr){
        cout << value << " ";
    }
}
int main(){
    vector<int> arr{1,-1,0,-3,2,2,1,2};
    int start = 0;
    vector<int> brr ;

    // for(int i=0 ; i< arr.size() ; i++){
    //         // cout << "for i " <<  i << arr[i] << endl;
    //     for(int j=i +1; j < arr.size() ; j++){
    //         // cout << "for j "<< j << " ) " <<arr[i] << " , " << arr[j] << endl;
    //         if(arr[i] == arr[j]){
    //             cout << arr[i] << "  "; 
    //             // arr[j] = INT16_MIN ;
    //             break;
    //         }
    //     }
    // }
    // printArray(brr);

    sort(arr.begin() , arr.end());

    for(int i =0 ; i< arr.size()-1 ; i++){
        if(arr[i] == arr[i+1]){
            cout << arr[i] << " ";
        }
        // cout << " not "<< endl ;
    }

}