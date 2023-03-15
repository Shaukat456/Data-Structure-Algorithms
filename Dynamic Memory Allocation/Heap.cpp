
#include <iostream>
using namespace std;
int main()
{

    int variable = 1;

    // *pointer is pointing to the memory address in heap
    int *pointer = new int(); // new is use to allocate memory in heap

    *pointer = 10;

    cout << *pointer << endl; // 10

    // memory that is allocated to this pointer will be removed
    // but the pointer will be there  , known as Dangling Pointer
    delete (pointer);

    cout << *pointer << endl; /// 0

    pointer = new int[2];

    cout << *pointer;

    delete[] pointer; // deletes the block of memory allocated to array

    pointer = NULL; // now the pointer is not pointing any where.

    return 0;
}