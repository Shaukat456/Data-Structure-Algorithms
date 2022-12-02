
#include <iostream>
using namespace std;
int main() {

int hard_coded_array[]={1,2,4,5,12};


// sizeof operator returns the bytes consumed


// cout  << sizeof(hard_coded_array[0])  ;  // returns   20 
// since we have 5 integers in the array
// we know that an integer is of 4 byte
// we can number_of_items_in_array * 4 
// thats how we got 20 


int first_element=sizeof(hard_coded_array[1]); // 4 bytes

// if we divide 20 by any item of the array , since all the items are integer 
// and they would all have the same size i-e 4 bytes
// dividing 20 by the size of any item in the array will return the original//length of the array , !!!

int size=sizeof(hard_coded_array)/sizeof(hard_coded_array[0]);
cout <<size << endl;   // returns the length 



// assuming first item of the array to be the maximum
int max_number=hard_coded_array[0]; 
// assuming first item of the array to be the maximum

// to be updated when needed
int index;

for (int i = 0 ; i<=sizeof(hard_coded_array)/sizeof(hard_coded_array[0]) -1  ; i++){  
  if (hard_coded_array[i]  > max_number ){
    max_number=hard_coded_array[i];
    index=i;  // updating index value to that of the highest number;
      
   
  }
}

cout <<max_number<<endl;
cout <<index<<endl;


    return 0;
}