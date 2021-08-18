//
//  main.cpp
//  cplusplus
//
//  Created by Shehab Tareque on 17/8/21.
//

#include <iostream>

int main() {
    string username = "ahmad";
    string password = "ah12345";
    string tmpPassword;
    do
    {
        cout << "Enter your password ";
        cin >> tmpPassword;
    }
    while (tmpPassword != password);
    cout<<endl<< "Welcome back "<<username<<" :)";
    
    return 0;
}
