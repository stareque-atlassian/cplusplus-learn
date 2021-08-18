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

void printStars(int n, int r)
{
   for (int count = 1; count <= n; count++)
   {
       cout << "* ";
       if(count % r == 0)
           cout << endl;
   }
    
}
