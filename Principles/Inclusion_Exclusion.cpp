
#include <iostream>
using namespace std;


int divisible (int randomNumber , int n1 , int n2){
    int way1 = randomNumber / n1;
    int way2 = randomNumber / n2 ; 
    
    int CommonWay= randomNumber / (n1* n2);
    
    return way1 +way2 - CommonWay;
}

int main() {
    
//   Inclusion  Exclusion Principle

// When We have to find the number of ways to do something 
// we find one way 
// then second way
// add both
// and then delete the common ways 

// Mathemetically 
// Total Ways = way1 + way2 - common_ways

    
    int Rn , Num1 , Num2 ; 
    
    cin >> Rn >> Num1 >> Num2;
    
    cout << divisible(Rn , Num1, Num2);


    return 0;
}