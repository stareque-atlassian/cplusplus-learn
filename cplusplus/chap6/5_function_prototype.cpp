//
//  main.cpp
//  cplusplus
//
//  Created by Shehab Tareque on 17/8/21.
//

#include <iostream>
#include <cmath>

using namespace std;

double larger(double x, double y);

int main() {
    double one = 13.00;
    cout << larger(one, 29) << endl;
}

double larger(double x, double y) {
    if (x >= y)
        return x;
    return y;
}
