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
    
    //the values of the variables get copied into the fucntion
    SwapValueTypes(number1,number2);
    
    //number1: [6]
    //number2: [13]
    
    
    cout << "After calling the function Swap"<<endl;
    cout << "number1 = " << number1 << ", number2 = " << number2<< endl;
}



void SwapReferenceTypes(int &a, int &b)
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
    
    //the values of the variables dont just get copied into the fucntion
    // the box itself gets transfered into the function
    // the memeory adderess that holds "number1" which has the value 6. the memory address value is sent to the function.
    // the pointer  pointing to the number1 is sent
    // number1 itself is sent into the function
    SwapReferenceTypes(number1, number2);
    
    //number1: [13]
    //number2: [6]
    
    
    cout << "After calling the function Swap"<<endl;
    cout << "number1 = " << number1 << ", number2 = " << number2<< endl;
}












void AreaPermiter(double length, double width, double &area, double
&perimeter)
{
    area = length * width;
    perimeter = 2 *(length + width);
}
int main() {
    double w = 10;
    double ar, pe;
    AreaPermiter(2*20/ 4,w, 12,pe );
    cout<<"area = "<<ar<<endl;
     cout<<"perimeter = "<<pe<<endl;
}
