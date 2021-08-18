//
//  main.cpp
//  cplusplus
//
//  Created by Shehab Tareque on 17/8/21.
//

#include <iostream>

int main() {
    // insert code here...
    int List1[5]={12,32,16,23,45};
    int List1[5]={12,32,16,23,45,25};
    int List2[] = {12, 32, 16, 23, 45, 25}; // array size = 6
    
    int List3[5] = {0}; // List3 {0, 0, 0, 0, 0}
    int List4[5] = {12, 32}; // List3 {12, 32, 0, 0, 0}
    int List5[10] = {2,5,6,,8};//illegal
    
    
    double newSales[10];
    for (int index = 0; index < 10; index++)
        newSales[index] = sales[index];
    
    double sum = 0;
    for (int index = 0; index < 10; index++)
        sum = sum + sales[index];
    double average = sum / 10;
    
    return 0;
}
