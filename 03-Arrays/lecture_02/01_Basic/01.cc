#include<iostream>
#include<vector>
using namespace std ;

int main()
{

    // create a vector 
    vector<int> arr ; 

    // size of default vector is 
    cout << "size of default vector is " << arr.size()  << endl  ;

    //capacity of a default vector is 
    cout << "capacity of a default vector is " << arr.capacity() << endl ; 

    // Taking an input in a vector 
    arr.push_back(5);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(6);

    // remove an element from an array
    arr.pop_back() ;

    //  printing values of a vector 
    for(int i=0 ; i< arr.size() ; i++ ){
        cout << arr[i] << " " ;
    }
    cout << endl;

    // size of after putting input in a vector is 
    // size - number of element in an element are present 
    cout << "size of after putting input in a vector is " << arr.size()  << endl  ;

    //capacity of a after putting input in a vector is 
    // capacity - max number of an element can be allocated in the arr 
    cout << "capacity of a after putting input in a vector is " << arr.capacity() << endl ; 

    

}