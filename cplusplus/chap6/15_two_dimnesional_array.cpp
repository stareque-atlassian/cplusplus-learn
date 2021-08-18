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


const int NUMBER_OF_ROWS = 6;
          const int NUMBER_OF_COLUMNS = 5;
          void printMatrix(const int matrix[][NUMBER_OF_COLUMNS],
                           int noOfRows)
{
              int row, col;
              for (row = 0; row < noOfRows; row++)
              {
                  for (col = 0; col < NUMBER_OF_COLUMNS; col++)
                      cout << setw(5) << matrix[row][col] << " ";
                  cout << endl;
              }
}
void sumRows(int matrix[][NUMBER_OF_COLUMNS], int noOfRows)
{
    int row, col;
    int sum;
    for (row = 0; row < noOfRows; row++)
    {
1 voidmatrixFun(intmatrix[][5],intnoOfRows);//Correctprototype 2 voidmatrixFun(intmatrix[5][],intnoOfRows);//Incorrectprototype
sum = 0;
for (col = 0; col < NUMBER_OF_COLUMNS; col++)
    sum = sum + matrix[row][col];
cout << "sum of row" << (row + 1) << " = " << sum << endl;
