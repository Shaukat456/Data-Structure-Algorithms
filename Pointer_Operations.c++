
#include <iostream>

using namespace std;
int main() {
   
    int variable= 4;
    int  *pointer;        
    pointer=&variable;           // & is use to store memory address 
    cout << *pointer << endl;     // dereferencing 
  
    *pointer= 50;             // Value modified 
    cout << *pointer;
  
  
    return 0;
}