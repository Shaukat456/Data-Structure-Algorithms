#include <iostream>


// call by reference 
void inc(int *a ){
    *a=*a + 1;
};

using namespace std;
int main() {

int num=3;
inc(&num);

cout <<num;
        
    return 0;
}