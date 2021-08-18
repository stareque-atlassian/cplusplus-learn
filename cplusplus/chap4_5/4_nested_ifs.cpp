//
//  main.cpp
//  cplusplus
//
//  Created by Shehab Tareque on 17/8/21.
//

#include <iostream>
using namespace std;

int main() {
    
    if (temperature >= 50)
        if (temperature >= 80)
            cout << "Good day for swimming." << endl;
        else
            cout << "Good day for golfing." << endl;
    else
        cout << "Good day to play tennis." << endl;
    
    
    
    if (gender == 'M')
        if (age < 21 )
            policyRate = 0.05;
        else
            policyRate = 0.035;
    else if (gender == 'F')
        if (age < 21 )
            policyRate = 0.04;
    else
            policyRate = 0.03;
    
    return 0;
}
