//
//  main.cpp
//  cplusplus
//
//  Created by Shehab Tareque on 17/8/21.
//

#include <iostream>

int main() {
    int power(int x, int y)
    {
        int result = 1;
        for(int i=0; i<y; i++)
            result *= x;
        return result;
    }
    return 0;
}
