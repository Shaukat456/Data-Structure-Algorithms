
#include <iostream>

using namespace std;
int main() {
   

 int arr[]= {53,12,31,2};
    
    cout <<*arr <<endl;      // first element of array;
    
    int *pointer =arr;      //53 has been stored in  the pointer 
    
    cout << *pointer;       // gives 53
    

    //suppose that initially the address is 100 
    // after an iteration it would be incremented by 4 bytes (because int size if 4bytes)
    // the memory address would be incremented by the 100 + 4 on every iteration 
     

    for (int i = 1 ; i<=4; i++){
        cout << *pointer << endl;
        pointer ++;
    }

    return 0;
}