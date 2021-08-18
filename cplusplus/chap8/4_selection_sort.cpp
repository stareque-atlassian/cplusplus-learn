//
//  main.cpp
//  cplusplus
//
//  Created by Shehab Tareque on 17/8/21.
//

#include <iostream>

int main() {
    // insert code here...
    
    int smallestIndex;
    int location;
    int temp;
    int list[]= {2, 56, 34, 25, 73, 46, 89, 10, 5, 16};
    for (int index = 0; index < 9; index++)
    {
    //Step a
        smallestIndex = index;
        for (location = index + 1; location < length; location++)
            if (list[location] < list[smallestIndex])
                smallestIndex = location;
    //Step b
        temp = list[smallestIndex];
        list[smallestIndex] = list[index];
        list[index] = temp;
    }
    
    
    return 0;
}
