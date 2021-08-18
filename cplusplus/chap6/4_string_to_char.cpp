//
//  main.cpp
//  cplusplus
//
//  Created by Shehab Tareque on 17/8/21.
//

#include <iostream>

int main() {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}



char Fun(string str, int x)
{
    if( x >= 0 && x <= str.length())
        return str[x];
    return '\0';
}
