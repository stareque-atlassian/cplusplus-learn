//
//  main.cpp
//  cplusplus
//
//  Created by Shehab Tareque on 17/8/21.
//

#include <iostream>


void SwapValueTypes(int num1, int num2)
{
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
    cout<< "Inside function Swap..."<<endl;
    cout<< "num1 = " << num1
        << ", num2 = " << num2<< endl;
}

int main() {
    int number1 = 6;
    int number2 = 13;
    cout<< "Before calling the function Swap"<<endl;
    cout<< "number1 = " << number1
        << ", number2 = " << number2<< endl;
    SwapValueTypes(number1,number2);
    cout<< "After calling the function Swap"<<endl;
    cout<< "number1 = " << number1
}
<< ", number2 = " << number2<< endl;



void SwapReferences(int &num1, int &num2)
{
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
    cout<< "Inside function Swap..."<<endl;
    cout<< "num1 = " << num1
        << ", num2 = " << num2<< endl;
}
int main() {
    int number1 = 6;
    int number2 = 13;
    cout<< "Before calling the function Swap"<<endl;
    cout<< "number1 = " << number1
        << ", number2 = " << number2<< endl;
    SwapReferences(number1,number2);
    cout<< "After calling the function Swap"<<endl;
    cout<< "number1 = " << number1    << ", number2 = " << number2<< endl;
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
