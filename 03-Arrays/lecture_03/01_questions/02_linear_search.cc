#include<iostream>
#include<vector>
using namespace std ;

void findKey( int crr[2][2] ){
    for(int i=0 ; i<2 ; i++)
    {
        for(int j=0 ; j<2 ; j++)
        {
            if(crr[i][j] == 3)
            {
                cout << " 3 ia located at " << "row number " << i << " column number " << j  ;
            }
        }
    }
}

int main(){
    int crr[2][2]= {{1,2} , {3,4}  } ;

    findKey(crr) ;

    // for(int i=0 ; i<2 ; i++)
    // {
    //     for(int j=0 ; j<2 ; j++)
    //     {
    //         if(crr[i][j] == 3)
    //         {
    //             cout << " 3 ia located at " << "row number " << i << " column number " << j  ;
    //         }
    //     }
    // }
}