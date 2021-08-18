//
//  main.cpp
//  cplusplus
//
//  Created by Shehab Tareque on 17/8/21.
//

#include <iostream>
using namespace std;

func switchCase() {
    int num;
    cout << "Enter an integer between 0 and 5: ";
    cin >> num;
    switch(num)
    {
        case 0:
        case 1:
            cout << "One";
        case 2:
            cout << "Two";
        case 3:
        case 4:
            break;
        case 5:
            cout << "Five";
        default:
            cout << "Invalid Input" << endl;

    }
}

func switchCompare1() {
    cout<< "Enter an integer"<<endl;
    cin>>i;
    switch(i)
    {
        case 0:
        case 1:
            n=10;
            break;
        case 2:
            n=500;
            break;
        default:
            n = 0;
    }
    cout<<n;
    
}

func switchCompare2() {
    
    int i,n;
    cout<< "Enter an integer" <<endl;
    cin >> i;
    
    if(i == 0 || i == 1)
        n=10;
    else if(i == 2)
        n=500;
    else
       n = 0;
    cout<<n;
    
}

int main() {
    
    switchCase()
    switchCompare1()
    switchCompare2()
    
}
