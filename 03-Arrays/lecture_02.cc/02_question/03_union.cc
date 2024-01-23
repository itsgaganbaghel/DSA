#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int> arr{1,2,3,4,5};
    vector<int> brr{3,4,5,6,7};
    vector<int> ans;

    // remove duplicates 
    for(int i=0 ; i<arr.size() ; i++){
        for(int j=0 ;  j<brr.size() ; j++){
            if(arr[i] == brr[j]){
                brr[j] = INT16_MIN ;
            }
        }
    }

    // PUSH arr[i] in ans
    for(int i=0 ; i<arr.size() ; i++){
       ans.push_back(arr[i]) ; 
    }

    // PUSH brr[i] in ans
    for(int i=0 ; i<brr.size() ; i++){
    if(brr[i] != INT16_MIN){
       ans.push_back(brr[i]) ;   
    }
    }

    // printing ans 
    for(int i=0 ; i<ans.size() ; i++){
        cout << ans[i] << " ";
    }
}