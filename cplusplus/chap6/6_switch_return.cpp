//
//  main.cpp
//  cplusplus
//
//  Created by Shehab Tareque on 17/8/21.
//

#include <iostream>
using namespace std;

char courseGrade(int score)
{
    switch (score / 10)
    {
        case 5:
            return 'F';
        case 6:
            return 'D';
        case 7:
            return 'C';
        case 8:
            return 'B';
        case 9:
        case 10:
            return 'A';
        default:
            return 'F';
    }
    
}
int main() {
    cout<<courseGrade(70)<<endl;
    cout<<courseGrade(95)<<endl;
}
