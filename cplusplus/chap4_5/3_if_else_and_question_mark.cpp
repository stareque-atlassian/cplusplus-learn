//
//  main.cpp
//  cplusplus
//
//  Created by Shehab Tareque on 17/8/21.
//

#include <iostream>
using namespace std;

func testIfWithIncrementation() {
    int x;
    cout << "Enter an integer value..."<<endl;
    cin >> x;
    if(++x >= 5)
        x += 2;
    cout << "x = " << x;
}

func testIfElse() {
    if (x > y)
        x += 3;
    else if(x < y)
        y += 3;
    else
    x = y = y + 3;
}

func testTernaryOperator() {
    (n % 2 == 0) ? cout << n <<" :Even number\n" : cout << n <<":Odd
       number\n";
}

int main() {
    testIfWithIncrementation();
    testIfElse();
    testTernaryOperator()
    return 0;
}
