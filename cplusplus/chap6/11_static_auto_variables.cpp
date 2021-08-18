//
//  main.cpp
//  cplusplus
//
//  Created by Shehab Tareque on 17/8/21.
//

#include <iostream>

int main() {
    // insert code here...
//    std::cout << "Hello, World!\n";
    normalFunc();
    otherFunc1();
    otherFunc2();
    return 0;
}

func normalFunc() {
    int count;
    for (count = 1; count <= 5; count++)
    {
        int x = count;
        x += count;
        cout<<count<<". x = "<<x<<endl;
    }
}


func otherFunc1() {
    int count;
    for (count = 1; count <= 5; count++)
    {
        static int x = count;
        x += count;
        cout<<count<<". x = "<<x<<endl;
    }
}



void otherFunc2() {
    static int x = 0;
    int y = 10;
    x = x + 2;
    y = y + 1;
    cout << "Inside test x = " << x << " and y = "
         << y << endl;
}
