//
//  main.cpp
//  cplusplus
//
//  Created by Shehab Tareque on 17/8/21.
//

#include <iostream>

int main() {
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    
    
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 10; j++)
            cout << setw(3) << i * j;
        cout << endl;
    }
    
    return 0;
}
