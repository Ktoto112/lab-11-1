#include <iostream>
using namespace std;

int main() {
    double a, b;          
    double* ptrA, * ptrB;  

   
    cout << "Enter a value for a: ";
    cin >> a;
    cout << "Enter a value for b: ";
    cin >> b;

  
    ptrA = &a;
    ptrB = &b;

   
    cout << "\nInitial values:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

   
    if (*ptrA > *ptrB) {
        *ptrA += 7;  
        *ptrB -= 3;  
    }
    else {
        *ptrB += 7;  
        *ptrA -= 3; 
    }

    
    cout << "\nAfter the changes:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
