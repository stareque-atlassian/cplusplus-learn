//
//  main.cpp
//  cplusplus
//
//  Created by Shehab Tareque on 17/8/21.
//

#include <iostream>

int main() {
    int Sum(int val1 = 1 ,int val2 = 1,int val3 = 1); //correct
    int Sum(int val1 ,int val2 = 1,int val3 = 1); //correct
    int Sum(int val1 = 1 ,int val2,int val3 = 1);  //inccorrect
    int Sum(intval1=1,intval2=1,intval3); prototype //inccorrect
    
    voidFun(intval1,int&val2=1,intval3=2); 2 //illegalfunctiondeclaration
    
    return 0;
}
