//
//  main.cpp
//  cplusplus
//
//  Created by Shehab Tareque on 17/8/21.
//

#include <iostream>
using namespace std;

void SwapValueTypes(int a, int b)
{
    //a: [6]
    //b: [13]
    
    int tmp = a; // a = 6, tmp = 6
    a = b; // a = 13,
    b = tmp; // b = 6
    
    //a: [13]
    //b: [6]
    
    cout << "Inside function Swap..."<<endl;
    cout << "a = " << a << ", b = " << b << endl;
}

int main() {
    
    
    int number1 = 6;  //number1: [6]
    int number2 = 13; //number2: [13]
    
    
    cout << "Before calling the function Swap"<<endl;
    cout << "number1 = " << number1 << ", number2 = " << number2<< endl;
    
    //number1: [6]
    //number2: [13]
    
    SwapValueTypes(number1,number2);
    
    //number1: [6]
    //number2: [13]
    
    
    cout << "After calling the function Swap"<<endl;
    cout << "number1 = " << number1 << ", number2 = " << number2<< endl;
}



